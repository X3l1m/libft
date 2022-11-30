
delete_dn: foo
	rm -f dn

foo: main.o part.o
	gcc -o foo main.o part.o

%.o: main.c part.c
	gcc -c $^

clean:
	rm -f main.o part.o
	rm -f foo