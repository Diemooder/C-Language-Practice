#include <stdio.h>
#include <stdlib.h>

int main(){
    struct Student{
        char name[50];
        int age;
        float grade;
    };

    int num_students;
    printf("Number of students: ");
    fflush(stdout);
    scanf("%d", &num_students);

    struct Student *student_list = malloc(num_students * sizeof(struct Student));

    if(student_list == NULL){
        printf("Memory allocation failed");
        fflush(stdout);
        return 1;
    }

    for(int i = 0; i < num_students; i++){
        printf("\nStudent %d\n", i+1);
        printf("Name: ");
        fflush(stdout);
        scanf("%49s", (student_list + i)->name);
        printf("Age: ");
        fflush(stdout);
        scanf("%d", &(student_list + i)->age);
        printf("Grade: ");
        fflush(stdout);
        scanf("%f", &(student_list + i)->grade);
    }

    printf("\nStudent List:\n");
    printf("----------------------------\n");
    printf("%-10s %-5s %-5s\n", "Name", "Age", "Grade");
    for(int i = 0; i < num_students; i++){
        printf("%-10s %-5d %-5.2f\n", (student_list + i)->name, (student_list + i)->age, (student_list + i)->grade);
    }

    free(student_list);

    return 0;
}