app2.out: ex4_2.o InsertLinkedList.o
	gcc -o app2.out ex4_2.o InsertLinkedList.o

main.o: ex4_2.c
	gcc -c -o ex4_2.o ex4_2.c
InsertLinkedList.o: InsertLinkedList.c
	gcc -c -o InsertLinkedList.o InsertLinkedList.c


clean:
	rm -f *.o
	rm -f app.out

