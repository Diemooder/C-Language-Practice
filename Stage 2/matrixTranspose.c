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

    int total_space = rows * cols;
    int *original_matrix = malloc(total_space * sizeof(int));
    int *transposed_matrix = malloc(total_space * sizeof(int));

    printf("Enter %d numbers: ", total_space);
    fflush(stdout);
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            scanf("%d", (original_matrix + (row * cols + col)));
        }
    }

    printf("\nOriginal:\n");
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            printf("%4d ", *(original_matrix + (row * cols + col)));
        }
        printf("\n");
    }

    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            *(transposed_matrix + (col * rows + row)) = *(original_matrix + (row * cols + col));
        }
    }

    printf("\nTranspose:\n");
    for(int row = 0; row < cols; row++){
        for(int col = 0; col < rows; col++){
            printf("%4d ", *(transposed_matrix + (row * rows + col)));
        }
        printf("\n");
    }

    free(original_matrix);
    free(transposed_matrix);
    return 0;
}