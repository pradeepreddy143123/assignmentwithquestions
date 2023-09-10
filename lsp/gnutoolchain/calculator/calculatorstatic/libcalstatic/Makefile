all:calc
	echo "build done"

calc:calcmain.o libcalc.a install
	gcc -static calcmain.o -o calc -L . -lcalc

calcmain.o:calcmain.c
	gcc -c calcmain.c
libcalc.a:add.o sub.o
	ar -rc libcalc.a add.o sub.o
add.o:add.c
	gcc -c add.c

sub.o:sub.c
	gcc -c sub.c
install:
	sudo cp libcalc.a /usr/bin/
uninstall:
	sudo rm /bin/calc
clean:
	rm *.o calc/usr/bin/libcalc.a

