main.o: main.c
	gcc -o program main.c

run:
	./program

clean:
	*.o
