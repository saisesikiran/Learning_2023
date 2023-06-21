#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student 
{
    int rollno;
    char name[20];
    float marks;
};

// Function to initialize all members of the array of structures
void initializeStudents(struct Student* students, int size)
 {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

int main()
 {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    initializeStudents(students, size);

    printf("\nArray of Students (After Initialization):\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}
