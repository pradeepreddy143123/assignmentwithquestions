all:market
	echo "build done"
market:main.o
	gcc main.o -lmarket -L ../lib/ -o ../bin/market
main.o:
	gcc -c main.c
clean:
	rm *. o
