../bin/tp5: ../build/main.o ../build/tp5.o
	gcc -o ../bin/tp5 ../build/main.o ../build/tp5.o

../build/main.o: main.c
	gcc -Wall -Werror -W -c -o ../build/main.o main.c

../build/tp5.o: tp5.c
	gcc -Wall -Werror -W -c -o ../build/tp5.o tp5.c
