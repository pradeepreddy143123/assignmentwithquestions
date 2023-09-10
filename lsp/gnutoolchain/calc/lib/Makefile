all:libcal.a install
	echo "build done"

libcal.a:add.o sub.o
	ar -rcs libcal.a add.o sub.o

add.o:add.c
	gcc -c add.c

sub.o:sub.c
	gcc -c sub.c

install:
	sudo cp libcal.a /usr/lib/

clean:
	sudo rm /usr/lib/libcal.a *.o libcal.a
