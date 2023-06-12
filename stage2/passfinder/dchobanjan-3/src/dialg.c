#include "../inc/pathfinder.h"

void dialg(int first, int *map, int count, t_island *islands) {
    bool block[count];
    for (int i = 0; i < count; i++) {
        islands[i].length = 2147483647;
        block[i] = false;
    }
    islands[first].length = 0;
    int current = first;
    for (int a = 0; a < count; a++) {
        block[current] = true;
        for (int i = 0; i < count; i++)
            if (map[current * count + i] != -1)
                if (islands[i].length > map[current * count + i] + islands[current].length && !block[i])
                    islands[i].length = map[current * count + i] + islands[current].length;
        int min = 2147483647;
        for (int i = 0; i < count; i++) {
            if (islands[i].length < min && !block[i]) {
                current = i;
                min = islands[i].length;
            }
        }
    }
}

void empty2(){
    mx_printstr("Pasta");
    mx_printstr("Cheese");
    mx_printstr("Egs");
    mx_printstr("Water");
    mx_printstr("Sour");
    mx_printstr("Condiment");
    mx_printstr("Cook the passta after add the eggs");
    mx_printstr("After add cheese and after some time add condiment and sour");
    mx_printstr("Wait 3-5 minutes and take out");
    mx_printstr("Good luck and enjoy your meal");
}

