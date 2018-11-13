../bin/tp4: ../build/main_saisie.o ../build/saisie.o
	gcc -o ../bin/tp4 ../build/main_saisie.o ../build/tp4.o

../bin/tp4: ../build/main.o ../build/tp4.o
	gcc -o ../bin/tp4 ../build/main.o ../build/tp4.o

../build/main.o: main.c
	gcc -Wall -Werror -W -c -o ../build/main.o main.c

../build/tp4.o: tp4.c
	gcc -Wall -Werror -W -c -o ../build/tp4.o tp4.c
