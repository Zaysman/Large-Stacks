#include <stdio.h>
#include <time.h>
#include <stdlib.h>

clock_t start, end;
double cpu_time_used;

void staticArray();
void stackArray();
void heapArray();

int main() {

    int i = 0;
    int j = 0;;

    printf("static array\n");
    start = clock();
    printf("Start time for static array: %ld\n", start);
    for(i = 0; i < 100000; i++) {
        staticArray();
    }
    end = clock();
    printf("end time for static array: %ld\n", end);
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time for static array in seconds = %f\n\n", cpu_time_used);

    printf("stack array\n");
    start = clock();
    printf("Start time for stack array: %ld\n", start);
    for(i = 0; i < 100000; i++) {
        stackArray();
    }
    end = clock();
    printf("end time for stack array: %ld\n", end);
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time for stack array in seconds = %f\n\n", cpu_time_used);

    printf("heap array\n");
    start = clock();
    printf("Start time for heap array: %ld\n", start);
    for(i = 0; i < 100000; i++) {
        heapArray();
    }
    end = clock();
    printf("end time for heap array: %ld\n", start);
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time for heap array in seconds = %f", cpu_time_used);


    return 0;
}


void staticArray() {
    static int staticarr[10000];

}

void stackArray() {
    int stackarr[10000];

}

void heapArray() {
    int * heaparr = malloc(10000 * sizeof(int));
    free(heaparr);


}