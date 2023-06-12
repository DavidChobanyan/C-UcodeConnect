all: uninstall libmx

libmx:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c src/*.c
	mkdir obj
	mv *.o obj
	ar -rc libmx.a obj/*.o
	ranlib libmx.a

clean:
	rm -rdf obj
	rm -rf *.o

uninstall: clean
	rm -f libmx.a

reinstall:
	make uninstall
	make
