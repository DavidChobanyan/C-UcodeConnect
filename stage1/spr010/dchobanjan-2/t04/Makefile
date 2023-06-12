all: mx_wc

mx_wc:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -Iinc -o mx_wc src/*.c

clean:
	rm -rf mx_wc

uninstall:
	rm -rf mx_wc

reinstall:
	make uninstall
	make

