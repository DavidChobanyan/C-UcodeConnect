#include "../inc/pathfinder.h"

void results(t_island *islands, int *map, int count)
{
    for (int a = 0; a < count; a++)
        for (int b = a + 1; b < count; b++)
        {
            char *route = mx_strnew(59 + (mx_strlen(islands[a].name) * 2) + mx_strlen(islands[b].name)), *distance = mx_strnew(11);
            route[0] = '\0';
            mx_strcat(route, "========================================\n");
            mx_strcat(route, "Path: ");
            mx_strcat(route, islands[a].name);
            mx_strcat(route, " -> ");
            mx_strcat(route, islands[b].name);
            mx_strcat(route, "\n");
            mx_strcat(route, "Route: ");
            mx_strcat(route, islands[a].name);
            distance[0] = '\n';
            mx_strcat(distance, "Distance: ");
            dialg(b, (int *)map, count, islands);

            information data;
            data.start = a;
            data.finish = b;
            data.sum = islands[a].length;
            data.count = count;
            route = pathfinder(route, distance, islands, (int *)map, data);
            mx_printstr(route);
            mx_strdel(&route);
        }
    for (int i = 0; i < count; i++)
        mx_strdel(&(islands[i].name));
}

