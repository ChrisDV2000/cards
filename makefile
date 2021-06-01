CPPFLAGS = -Wall -Werror -Wshadow -g
CPPFILES = trash.cpp

all : build

build:
	g++ $(CPPFLAGS) $(CPPFILES) -o trash
noFlags:
	g++ $(CPPFILES) -o trash.exe
run: build
	./trash
	rm -f trash
valgrind: build
	valgrind --leak-check=full ./trash
gdb: build
	gdb ./trash
clean:
	rm -f trash
	rm -f trash.exe