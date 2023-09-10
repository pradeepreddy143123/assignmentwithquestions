all:libcal.so install

libcal.so:add.o sub.o
	gcc -shared add.o sub.o -o libcal.so
add.o:
	gcc -c -fpic add.c
sub.o:
	gcc -c -fpic sub.c
install:
	sudo cp libcal.so /usr/lib/
clean:
	sudo rm /usr/lib/libcal.so *.o libcal.so
