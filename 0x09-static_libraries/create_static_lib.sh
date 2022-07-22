#/bin/bash
gcc -c -Wall -Werror -Wextran -pedantic -std=gnu89 *.c
ar -rc liball.a *.o
