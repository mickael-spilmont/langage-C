../bin/tp2: ../build/main.o ../build/tp2ex1.o ../build/tp2ex2.o
	gcc -o ../bin/tp2 ../build/main.o ../build/tp2ex1.o ../build/tp2ex2.o

../build/main.o: main.c
	gcc -Wall -Werror -W -c -o ../build/main.o main.c

../build/tp2ex1.o: tp2ex1.c
	gcc -Wall -Werror -W -c -o ../build/tp2ex1.o tp2ex1.c

../build/tp2ex2.o: tp2ex2.c
	gcc -Wall -Werror -W -c -o ../build/tp2ex2.o tp2ex2.c
