#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[50];
    int age;
    float grade;
} Student;

void swap_struct(Student* list, int a, int b){
    Student temp = *(list + a);
    *(list + a) = *(list + b);
    *(list + b) = temp;
}

int main(){

    int number_students;
    printf("Number of Students: ");
    fflush(stdout);
    scanf("%d", &number_students);

    Student *student_list = malloc(number_students * sizeof(Student));

    for(int i = 0; i < number_students; i++){
        printf("\nStudent %d\n", i+1);

        printf("Name: ");
        fflush(stdout);
        scanf("%s", (student_list + i)->name);

        printf("Age: ");
        fflush(stdout);
        scanf("%d", &(student_list + i)->age);

        printf("Grade: ");
        fflush(stdout);
        scanf("%f", &(student_list + i)->grade);
    }

    for(int i = 0; i < number_students - 1; i++){
        for(int j = i + 1; j < number_students; j++){
            if((student_list + j)->grade > (student_list + i)->grade){
                swap_struct(student_list, i, j);
            }
        }
    }

    printf("\nSorted List by Grade (Descending):\n");
    printf("---------------------------------\n");
    printf("%-10s%-5s%-5s\n", "Name", "Age", "Grade");
    for(int i = 0; i < number_students; i++){ 
        printf("%-10s%-5d%-5.1f\n", (student_list + i)->name, (student_list + i)->age, (student_list + i)->grade);
    }

    free(student_list);
    return 0;
}