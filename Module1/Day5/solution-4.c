#include <stdio.h>
#include <stdlib.h>

struct Student
 {
    char name[50];
    int rollNumber;
    float marks;
};

int main() 
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));


    if (students == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 0;
    }

    
    for (int i = 0; i < n; i++)
     {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &(students[i].rollNumber));

        printf("Enter marks: ");
        scanf("%f", &(students[i].marks));
    }

    printf("\nStudent Data:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails of student %d:\n", i + 1);

        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    
    free(students);

    return 0;
}
