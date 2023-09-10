all:market
	echo "build done"

market:main.o 
	gcc -static main.o -o market -L /lib -lmarket

main.o:main.c
	gcc -c main.c

clean:
	rm *.o market


