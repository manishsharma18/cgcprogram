#include <stdio.h>
#include <pthread.h>

int shared_variable = 0;
pthread_mutex_t lock;

void* thread_function(void* arg) {
    pthread_mutex_lock(&lock);

    shared_variable++;
    printf("Thread %ld incremented shared_variable to %d\n", (long)arg, shared_variable);

    pthread_mutex_unlock(&lock);

    return NULL;
}

int main() {
    pthread_t threads[5];
pthread_mutex_init(&lock, NULL);
    for (long i = 0; i < 5; ++i) {
        pthread_create(&threads[i], NULL, thread_function, (void*)i);
    }

    for (int i = 0; i < 5; ++i) {
        pthread_join(threads[i], NULL);
    }

    pthread_mutex_destroy(&lock);

    return 0;
}

