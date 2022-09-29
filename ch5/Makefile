app.out: main.o stackL.o
		gcc -o app.out main.o stackL.o

main.o: ex5_2.c
		gcc -g -c -o main.o ex5_2.c
stackL.o: stackL.c
		gcc -g -c -o stackL.o stackL.c


clean:
		rm -f *.o
		rm -f *.out
