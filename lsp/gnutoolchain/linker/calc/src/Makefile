include .config
ifdef ADD
CC_FLAG:= -DADD
endif
ifdef SUB
CC_FLAG += -DSUB
endif
all:calc
	echo "build done"
calc:main.o
	gcc ${STATIC_FLAG} main.o -lcalc -o ../bin/calc
main.o:main.c
	gcc ${DEBUG_FLAG} ${CC_FLAG} -c main.c
clean:
	rm *.o


