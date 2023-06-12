#include "../inc/pathfinder.h"

void dialg(int first, int *map, int count, t_island *islands) {
    for (int i = 0; i < count; i++)
        islands[i].length = 2147483647;

    int btable[count];

    for (int i = 0; i < count; i++) btable[i] = 0;

    islands[first].length = 0;
    int pointer = first;
    for (int a = 0; a < count; a++) {
        btable[pointer] = 1;
        for (int i = 0; i < count; i++) {
            if (map[pointer * count + i] != -1) {
                if (islands[i].length > map[pointer * count + i] + islands[pointer].length)
                    if(btable[i]==0)
                        islands[i].length = map[pointer * count + i] + islands[pointer].length;
            }
        }
        int m;
        for (int i = 0; i < count; i++) { 
            if (islands[i].length < 2147483647) {
                if(btable[i]==0){
                    pointer = i;
                    m = islands[i].length;
                }
            }
        }
    }
}
