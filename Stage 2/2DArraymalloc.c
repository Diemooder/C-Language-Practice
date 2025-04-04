#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows, cols;
    printf("Rows: ");
    fflush(stdout);
    scanf("%d", &rows);
    printf("Cols: ");
    fflush(stdout);
    scanf("%d", &cols);

    int total_data = (rows*cols);
    int* p = malloc(total_data * sizeof(int));
    printf("Enter %d numbers: ", total_data);
    fflush(stdout);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", (p + (i * cols + j)));
        }
    }

    printf("Matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", *(p +(i * cols + j)));
        }
        printf("\n");
    }

    free(p);
    return 0;
}