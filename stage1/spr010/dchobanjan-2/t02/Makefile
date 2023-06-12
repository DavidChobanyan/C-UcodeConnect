all: mx_cat

mx_cat:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -Iinc -o mx_cat src/*.c

clean:
	rm -rf mx_cat

uninstall:
	rm -rf mx_cat

reinstall:
	make uninstall
	make
	
