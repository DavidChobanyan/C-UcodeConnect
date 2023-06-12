#include "../inc/pathfinder.h"

void map(char *file, t_island *islands, int *map, int count_of_islands) {
    int sum_bridges = 0, line = 2, empty = 0;
    bool end = false;
    char *names[count_of_islands + 1];
    for (int i = 0; i < count_of_islands * count_of_islands; i++){
        map[i] = -1;
        if(i<=count_of_islands)
            names[i] = NULL;
    }
    while (!end) {
        char *str = mx_read_str(file, line, &end);
        int name1_len = mx_get_char_index(str, '-'), name2_len = mx_get_char_index(str, ',') - name1_len - 1;
        if (name1_len < 1) {
            write(2, "error: line ", sizeof("error: line "));
            mx_interr(line);
            write(2, " is not valid\n", sizeof(" is not valid\n"));
            mx_strdel(&str);
            for (int i = 0; names[i] != NULL; i++)
		        mx_strdel(&names[i]);
            exit(-1);
        }else if(name2_len < 1){
            write(2, "error: line ", sizeof("error: line "));
            mx_interr(line);
            write(2, " is not valid\n", sizeof(" is not valid\n"));
            mx_strdel(&str);
            for (int i = 0; names[i] != NULL; i++)
		        mx_strdel(&names[i]);
            exit(-1);
        }
        else if(mx_check(str)){
            write(2, "error: line ", sizeof("error: line "));
            mx_interr(line);
            write(2, " is not valid\n", sizeof(" is not valid\n"));
            mx_strdel(&str);
            for (int i = 0; names[i] != NULL; i++)
		        mx_strdel(&names[i]);
            exit(-1);
        }
        else if(mx_strncmp(&(str[name1_len + 1]), str, name1_len) == 0){
            write(2, "error: line ", sizeof("error: line "));
            mx_interr(line);
            write(2, " is not valid\n", sizeof(" is not valid\n"));
            mx_strdel(&str);
            for (int i = 0; names[i] != NULL; i++)
		        mx_strdel(&names[i]);
            exit(-1);
        }
        
        bool nothing = true;
        for (int i = 0; i < count_of_islands; i++) {
            if (names[i] != NULL) {
                if (mx_strncmp(str, names[i], name1_len) == 0) {
                    nothing = false;
                    break;
                }
            }
        }
        if (nothing) {
            if (empty < count_of_islands) {
                names[empty] = mx_strndup(str, name1_len);
                empty++;
            }
            else {
                write(2, "error: invalid number of islands\n", sizeof("error: invalid number of islands\n"));
                mx_strdel(&str);
                for (int i = 0; names[i] != NULL; i++)
		            mx_strdel(&names[i]);
                exit(-1);
            }
        }
        
        nothing = true;
        for (int i = 0; i < count_of_islands; i++) {
            if (names[i] != NULL) {
                if (mx_strncmp(&(str[name1_len + 1]), names[i], name2_len) == 0) {
                    nothing = false;
                    break;
                }
            }
        }
        if (nothing) {
            if (empty < count_of_islands) {
                names[empty] = mx_strndup(&(str[name1_len + 1]), name2_len);
                empty++;
            }
            else {
                write(2, "error: invalid number of islands\n", sizeof("error: invalid number of islands\n"));

                mx_strdel(&str);
                for (int i = 0; names[i] != NULL; i++)
		            mx_strdel(&names[i]);
                exit(-1);
            }
        }
        mx_strdel(&str);
        line++;
    }
    if (names[count_of_islands - 1] == NULL) {
        write(2, "error: invalid number of islands\n", sizeof("error: invalid number of islands\n"));
        for (int i = 0; names[i] != NULL; i++)
		    mx_strdel(&names[i]);
        exit(-1);
    }

    
    for (int i = 0; i < count_of_islands; i++) islands[i].name = names[i];

    line = 2;
    end = false;
    while (!end) {
        int bridge, node1, node2;
        char *str = mx_read_str(file, line, &end);
        int name1_len = mx_get_char_index(str, '-'), name2_len = mx_get_char_index(str, ',')-name1_len - 1,
        num_index = mx_get_char_index(str, ',') + 1, num_len = mx_strlen(str) - num_index;
        if (num_len < 1) {
            write(2, "error: line ", sizeof("error: line "));
            mx_interr(line);
            write(2, " is not valid\n", sizeof(" is not valid\n"));
            mx_strdel(&str);
            for (int i = 0; i < count_of_islands; i++)
		        mx_strdel(&(islands[i].name));
            exit(-1);
        }
        bridge = mx_satoi(&(str[num_index]), num_len);
        if (bridge < 0) {
            write(2, "error: line ", sizeof("error: line "));
            mx_interr(line);
            write(2, " is not valid\n", sizeof(" is not valid\n"));
            mx_strdel(&str);
            for (int i = 0; i < count_of_islands; i++)
		        mx_strdel(&(islands[i].name));
            exit(-1);
        }

        if (sum_bridges >= 0) sum_bridges += bridge;

        for (node1 = 0; node1 < count_of_islands; node1++)
            if (mx_strncmp(str, islands[node1].name, name1_len) == 0)
                break;
        for (node2 = 0; node2 < count_of_islands; node2++)
            if (mx_strncmp(&(str[name1_len + 1]), islands[node2].name, name2_len) == 0) 
                break;
        if (map[node1 * count_of_islands + node2] == -1) {
            map[node1 * count_of_islands + node2] = bridge;
            map[node2 * count_of_islands + node1] = bridge;
        }
        else {
            for (int i = 0; i < count_of_islands; i++)
		        mx_strdel(&(islands[i].name));
            write(2, "error: duplicate bridges\n", sizeof("error: duplicate bridges\n"));
            mx_strdel(&str);
            exit(-1);
        }
        mx_strdel(&str);
        line++;
    }
    if (sum_bridges < 0) {
        for (int i = 0; i < count_of_islands; i++)
		    mx_strdel(&(islands[i].name));
        write(2, "error: sum of bridges lengths is too big\n", sizeof("error: sum of bridges lengths is too big\n"));
        exit(-1);
    }
}

