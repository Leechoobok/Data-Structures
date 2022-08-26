app3.out: ex4_3.o CircularLinkedList.o
	gcc -o app3.out ex4_3.o CircularLinkedList.o

main.o: ex4_3.c
	gcc -g -c -o ex4_3.o ex4_3.c
CircularLinkedList.o: CircularLinkedList.c
	gcc -g -c -o CircularLinkedList.o CircularLinkedList.c


clean:
	rm -f *.o
	rm -f app.out

