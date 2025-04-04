#include <stdio.h>

void swap(int* x, int* y){
    int t = *x;
    *x = *y;
    *y = t;
}

int main(){

    int x, y;
    printf("Enter two integers: ");
    fflush(stdout);
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}