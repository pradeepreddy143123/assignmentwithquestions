all:libmarket.a libmarket.so install
	echo "build done"
libmarket.a:
	gcc -c purchase.c
	gcc -c sell.c
	gcc -c stock.c
	ar -rc  libmarket.a purchase.o sell.o stock.o
libmarket.so:
	gcc -c -fpic purchase.c
	gcc -c -fpic sell.c
	gcc -c -fpic stock.c
	gcc -shared purchase.o sell.o stock.o -o libmarket.so
install:
	sudo cp libmarket.a /usr/lib/
	sudo cp libmarket.so /usr/lib/
clean:
	rm *.o
	rm libmarket.a libmarket.so
