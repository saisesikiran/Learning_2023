#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a student
struct Student
 {
    int rollno;
    char name[20];
    float marks;
};


void searchStudentByName(struct Student* students, int size, const char* name) 
{
    int found = 0;

    for (int i = 0; i < size; i++) 
    {
        if (strcmp(students[i].name, name) == 0) 
        {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
}

int main()
 {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

  
    char name[20];
    printf("Enter the name to search: ");
    scanf("%s", name);

    searchStudentByName(students, size, name);

    free(students);

    return 0;
}

