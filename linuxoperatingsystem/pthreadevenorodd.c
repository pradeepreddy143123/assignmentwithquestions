#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_function(void *arg);

int main() 
{
	int res,print_count=0;
	pthread_t a_thread;
	void *thread_result;

	res = pthread_create(&a_thread, NULL, thread_function, NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	printf("even numbers\n");
	while(print_count < 20) {
		if (print_count%2 == 0) {
			printf("%d\t",print_count);
			print_count+=2;
		}
	}

	sleep(1);


}

void *thread_function(void *arg) {

	int print_count=1;
	printf("\nodd numbers\n");
	while(print_count < 20) {
		if (print_count%2 == 1) {
			printf("%d\t",print_count);
			print_count+=2;
		}
	}
}
