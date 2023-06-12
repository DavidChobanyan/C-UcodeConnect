all: MINILIBMX create

MINILIBMX: src/*.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c src/*.c

create:
	mkdir -p obj
	mv *.o ./obj
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic obj/*.o -o mx_cp

clean:
	rm -f obj/*.o

uninstall:
	rm -rf obj
	rm -f mx_cp

reinstall: uninstall all

