all: main
main: main.o kodowanie.o porównanie.o
	gcc -o main main.o kodowanie.o porównanie.o
main.o: main.c
	gcc -c main.c 
kodowanie.o: kodowanie.c
	gcc -c kodowanie.c
porównanie.o: porównanie.c
	gcc -c porównanie.c
clean:
	rm -f main *.o *~