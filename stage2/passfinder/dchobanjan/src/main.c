#include "../inc/pathfinder.h"

int main(int argc, char *argv[]) {
    validator(argc, argv);

    char *temp_text = mx_file_to_str(argv[argc - 1]);
    char **num_str = mx_strsplit(temp_text, '\n');
    int island_quantity = mx_satoi(num_str[0], mx_strlen(num_str[0]));

    for (int i = 0; num_str[i] != NULL; i++)
		mx_strdel(&num_str[i]);
    
    int count = island_quantity;

    int maps[(int)mx_pow(count, 2)];
    t_island islands[count];
    
    map(argv[1], islands, maps, count);

    results(islands, maps, count);
    return 0;
}
