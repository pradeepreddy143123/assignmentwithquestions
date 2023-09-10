include .config
ifdef PURCHASE
CC_FLAG:=-DPURCHASE 
endif
ifdef SELL
CC_FLAG +=-DSELL
endif
ifdef STOCK
CC_FLAG +=-DSTOCK
endif
all:market
	echo "build done"
market:main.o
	gcc ${STATIC_FLAG} main.o -lmarket -o ../bin/market
main.o:main.c
	gcc ${DEBUG_FLAG} ${CC_FLAG} -c main.c -I ../inc/
clean:
	rm *.o


