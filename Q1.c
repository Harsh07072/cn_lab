#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char  *argv[]) {
    int a, b;

    a = atoi(argv[1]);
    b = atoi(argv[2]);
   printf("Before swap: %d %d\n", a, b);
    swap(&a, &b);
    printf("After swap: %d %d\n", a, b);
    return 0;
}