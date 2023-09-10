all:libcalc.a
	echo "build done"

libcalc.a:stock.o sell.o purchase.o install
	ar -rcs libcalc.a stock.o sell.o purchase.o

stock.o:stock.c
	gcc -c stock.c

sell.o:sell.c
	gcc -c sell.c

purchase.o:
	gcc -c purchase.c

install:
	sudo cp libmarket.a /usr/lib/

clean:
	rm *.o market/usr/lib/libmarket.a


