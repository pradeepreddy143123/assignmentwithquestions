//create two threads T1(producer) write some data in to pipe oneside another t2(consumer) read data from pipe another side\\


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <fcntl.h>

void *producer(void *arg);
void *consumer(void *arg);
int counter = 0;
char buffer[5];

int main() {
    int res;
    pthread_t a_thread,b_thread;
    void *thread_result;

    res = pthread_create(&a_thread, NULL, producer, NULL);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }

    res = pthread_create(&b_thread, NULL, consumer, NULL);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    printf("Wait for pthread_join\n");
    res = pthread_join(a_thread, &thread_result);
    if (res != 0) {
        perror("Thread join failed");
        exit(EXIT_FAILURE);
    }
    res = pthread_join(b_thread, &thread_result);
    if (res != 0) {
        perror("Thread join failed");
        exit(EXIT_FAILURE);
    }
    printf("Thread joined\n");
    exit(EXIT_SUCCESS);
}

void *producer(void *arg) {
buffer[0]='a';
buffer[1]='b';
buffer[2]='c';
buffer[3]='d';
buffer[4]='e';
int fd=open ("abc_pipe",O_RDWR);
if (fd<0)
perror("open fail ");
write(fd,buffer,5);

   pthread_exit("exit");
}
void *consumer(void *arg) {

char buffer1[5];
int fd=open ("abc_pipe",O_RDWR);
if (fd<0)
perror("open fail ");
int read_ret=read(fd,buffer1,5);
write(1,buffer1,read_ret);

   pthread_exit("exit");
}
