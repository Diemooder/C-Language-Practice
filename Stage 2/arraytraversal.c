#include <stdio.h>

int main(){
    int x;
    printf("How many integers? ");
    fflush(stdout);
    scanf("%d", &x);

    int array[x];
    int* p = array; //Pointer that points to a space in memory (be 0)
    printf("Enter %d numbers: ", x);
    fflush(stdout);
    for(int i = 0; i < x; i++){
        scanf("%d", p + i);
    }

    printf("\nForward:\n");
    for(int i = 0; i < x; i++){
        printf("%d at address %p\n", *(p + i), (void*) (p + i));
    }
    
    printf("\nBackward:\n");
    for(int i = x; i > 0; i--){
        printf("%d\n", *(p + i - 1));
    }

    return 0;
}