all:cal
	echo "build done"
cal:main.o
	gcc main.o -lcal -o calc
main.o:
	gcc -c main.c
clean:
	rm *.o
