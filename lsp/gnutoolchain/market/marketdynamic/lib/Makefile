all:libmarket.so install
	echo "build done"
libmarket.so:stock.o sell.o purchase.o
	gcc -shared stock.o sell.o purchase.o -o libmarket.so
stock.o:
	gcc -c -fpic stock.c
sell.o:
	gcc -c -fpic sell.c
purchase.o:
	gcc -c -fpic purchase.c
install:
	sudo cp libmarket.so /usr/lib/
clean:
	sudo rm/usr/lib/market.so *.o market.so
