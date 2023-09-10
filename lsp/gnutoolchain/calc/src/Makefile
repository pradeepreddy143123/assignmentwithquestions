all:cal
	echo "build done"
cal:main.o 
	gcc -static  main.o  -lcal -o cal
main.o:
	gcc -c main.c
clean:
	rm *.o
	
