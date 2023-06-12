flags := -std=c11 -Wall -Wextra -Werror -Wpedantic 
name := matrix_rain

all: MINILIBMX

MINILIBMX:
	clang $(flags) src/*.c -o $(name) -lncurses

clean:
	rm -f $(name)

uninstall:
	rm -f $(name)

reinstall:
	make uninstall
	make
