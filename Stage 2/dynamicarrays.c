#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    printf("How many numbers? ");
    fflush(stdout);
    scanf("%d", &x);

    int* p = malloc(x * sizeof(int));
    printf("Enter %d numbers: ", x);
    fflush(stdout);
    for(int i = 0; i < x; i++){
        scanf("%d", (p+i));
    }

    printf("In reverse:\n");
    for(int i = 0; i < x; i++){
        printf("%d\n", *(p + (x-1) - i));
    }

    free(p);

    return 0;
}