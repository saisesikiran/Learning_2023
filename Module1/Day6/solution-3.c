#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student 
{
    int rollno;
    char name[20];
    float marks;
};


void displayStudents(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() 
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    // Assume the array of structures is initialized with data before calling the display function

    displayStudents(students, size);

    free(students);

    return 0;
}
