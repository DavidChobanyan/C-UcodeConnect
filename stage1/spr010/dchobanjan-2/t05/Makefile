all: parse_agents

parse_agents:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -Iinc -o parse_agents src/*.c

clean:
	rm -rf parse_agents

uninstall:
	rm -rf parse_agents

reinstall:
	make uninstall
	make

