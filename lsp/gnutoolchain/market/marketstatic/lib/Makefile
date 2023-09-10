all:libmarket.a install
	echo "build done"

libmarket.a:stock.o sell.o purchase.o
	ar -rcs libmarket.a stock.o sell.o purchase.o

stock.o:stock.c
	gcc -c stock.c

sell.o:sell.c
	gcc -c sell.c

purchase.o:
	gcc -c purchase.c

install:
	sudo cp libmarket.a /usr/lib/

clean:
	sudo rm /usr/lib/libmarket.a *.o libmarket.a



