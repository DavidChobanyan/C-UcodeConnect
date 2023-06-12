#include "../inc/pathfinder.h"

int get_current_index(char *string) {
    int length = 0;
    for (int i = 0; i < mx_strlen(string); i++)
        if (string[i] == '\n')
            length++;

    if (length == 1) return 0;
    for (int i = 0; i < mx_strlen(string); i++) {
        if (string[i] == '\n') {
            length--;
            if (length == 2)
                return i + 1;
        }
    }
    return 0;
}

char *pathfinder(char *route, char *dist, t_island *islands, int *map, information data) {
    if (data.start == data.finish) {
        int cnbr = data.sum, length;
        for (length = 0; cnbr > 0; length++)
            cnbr /= 10;
        cnbr = data.sum;
        char sum[length + 1];
        sum[length] = '\0';
        for (int a = 1; cnbr > 0; a++) {
            sum[length - a] = cnbr % 10 + 48;
            cnbr /= 10;
        }
        char *new_route;
        new_route = mx_strnew(mx_strlen(route) + mx_strlen(dist) + length + 42);
        mx_strcpy(new_route, route);
        mx_strcat(new_route, dist);
        mx_strcat(new_route, sum);
        mx_strcat(new_route, "\n========================================\n");
        mx_strdel(&route);
        mx_strdel(&dist);
        return new_route;
    }
    char *old_route = mx_strdup(&(route[get_current_index(route)]));

    bool first_iter = true;
    for (int i = 0; i < data.count; i++) {
        
        if (islands[data.start].length - islands[i].length == 
            map[data.start * data.count + i]
            && map[data.start * data.count + i] != -1) {
            if (!first_iter) {
                char *buf_PR = mx_strjoin(route, old_route);
                mx_strdel(&route);
                route = buf_PR;
            }
            char *new_route;
            new_route = mx_strnew(4 + mx_strlen(islands[i].name) + mx_strlen(route));
            mx_strcpy(new_route, route);
            mx_strcat(new_route, " -> ");
            mx_strcat(new_route, islands[i].name);
            mx_strdel(&route);

            int cnbr = map[data.start * data.count + i];
            int length;
            for (length = 0; cnbr > 0; length++)
                cnbr /= 10;
            cnbr = map[data.start * data.count + i];
            char bridge[length + 1];
            bridge[length] = '\0';
            for (int a = 1; cnbr > 0; a++) {
                bridge[length - a] = cnbr % 10 + 48;
                cnbr /= 10;
            }
            char *new_dest;
            if (i == data.finish && data.sum == islands[data.start].length) {
                new_dest = mx_strdup(dist);
            }
            else {
                new_dest = mx_strnew(3 + length + mx_strlen(dist));
                mx_strcpy(new_dest, dist);
                mx_strcat(new_dest, bridge);
                if (i == data.finish)
                    mx_strcat(new_dest, " = ");
                else
                    mx_strcat(new_dest, " + ");
            }
            information new_data;
            new_data.sum = data.sum;
            new_data.count = data.count;
            new_data.start = i;
            new_data.finish = data.finish;
            route = pathfinder(new_route, new_dest, islands, map, new_data);
            first_iter = false;
        }
    }
    mx_strdel(&old_route);
    mx_strdel(&dist);
    return route;
}

void empty(){
    mx_printstr("2023-year of Rabbit");
    mx_printstr("2022-year of the Water Tiger");
    mx_printstr("2021-year of the Ox");
    mx_printstr("2020-year of Rat");
    mx_printstr("2019-year of Pig");
    mx_printstr("2018-year of Dog");
    mx_printstr("2017-year of Rooster");
    mx_printstr("2016-year of Monkey");
    mx_printstr("2015-year of Goat");
    mx_printstr("2014-year of Horse");
    mx_printstr("2013-year of Snake");
    mx_printstr("2012-year of Dragon");
    mx_printstr("2011-year of Rabbit");
    mx_printstr("2010-year of the Water Tiger");
    mx_printstr("2009-year of the Ox");
    mx_printstr("2008-year of Rat");
    mx_printstr("2007-year of Pig");
    mx_printstr("2006-year of Dog");
    mx_printstr("2005-year of Rooster");
    mx_printstr("2004-year of Monkey");
    mx_printstr("2003-year of Goat");
}

