#include "../inc/pathfinder.h"

void mx_interr(int n) {
	int num[30];
	int length = 0;
	char c;
	if (n < 0) write(2, "-", 1);
	else if (n == 0) write(2, "0", 1);
	while (n != 0) {
		if (n % 10 < 0) num[length] = -(n % 10);
		if (n % 10 >= 0) num[length] = n % 10;
		
        n = n/10;
        length = length + 1;
	}
    for(int i = length - 1; i > -1; i--) {
		c = 48 + num[i];
        write(2, &c, 1);
	}
}

