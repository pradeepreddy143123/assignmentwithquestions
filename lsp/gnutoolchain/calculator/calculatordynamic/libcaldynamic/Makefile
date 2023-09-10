all:calc1
	echo "build done"

calc1:calcmain.o libcalc.so install
	gcc calcmain.o -o calc1 -L . -lcalc

calcmain.o:calcmain.c
	gcc -c calcmain.c

libcalc.so:add.o sub.o
	gcc -shared  add.o sub.o -o libcalc.so

add.o:add.c
	gcc -c -fpic add.c

sub.o:sub.c
	gcc -c -fpic sub.c

install:
	sudo cp libcalc.so /usr/lib/
clean:
	sudo rm *.o calc1 /usr/lib/libcalc.so

