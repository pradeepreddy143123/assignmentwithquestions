all:market
	echo "build done"

market:main.o libmarket.so install
	gcc main.o -o market -L . -lmarket

main.o:main.c
	gcc -c main.c
libmarket.so:stock.o sell.o purchase.o
	gcc -shared stock.o sell.o purchase.o -o libmarket.so
stock.o:stock.c
	gcc -c -fpic stock.c

sell.o:sell.c
	gcc -c -fpic sell.c
purchase.o:
	gcc -c -fpic purchase.c
install:
	sudo cp libmarket.so /usr/lib/
clean:
	rm *.o market /usr/lib/libmarket.so

