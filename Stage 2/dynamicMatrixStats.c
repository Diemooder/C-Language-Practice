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
    int *matrix = malloc(total_space * sizeof(int));

    printf("Enter %d numbers: ", total_space);
    fflush(stdout);
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            scanf("%d", (matrix + (row * cols + col)));
        }
    }

    //Analisis
    int sum = 0;
    int maxEntry[3] = {*(matrix + 0), 1, 1};
    int minEntry[3] = {*(matrix + 0), 1, 1};
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            //adding 1, to show the index how mathematicias would look at it
            int row_index = (row + 1);
            int col_index = (col + 1);
            int currentEntry = *(matrix + (row * cols + col));
            sum += currentEntry;
            if(currentEntry < minEntry[0]) {
                minEntry[0] = currentEntry;
                minEntry[1] = row_index;
                minEntry[2] = col_index;
            }
            if(currentEntry > maxEntry[0]) {
                maxEntry[0] = currentEntry;
                maxEntry[1] = row_index;
                maxEntry[2] = col_index;
            }
        }
    }
    float average = sum / total_space;

    printf("\nMatrix:\n");
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            printf("%3d ", *(matrix + (row * cols + col)));
        }
        printf("\n");
    }

    printf("\nSum: %d\n", sum);
    printf("Average: %.1f\n", average);
    printf("Max: %d at (%d, %d)\n", maxEntry[0], maxEntry[1], maxEntry[2]);
    printf("Min: %d at (%d, %d)\n", minEntry[0], minEntry[1], minEntry[2]);

    free(matrix);

    return 0;
}