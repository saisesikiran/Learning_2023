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


void parseStringAndInitialize(char* input, struct Student* students, int size)
 {
    char* token;
    int i = 0;

   
    token = strtok(input, " ");

    while (token != NULL && i < size) {
        
        students[i].rollno = atoi(token);

        token = strtok(NULL, " ");
        strcpy(students[i].name, token);

        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        i++;

        token = strtok(NULL, " ");
    }
}

int main()
 {
    int size;
    char input[100];

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    getchar(); // Consume the newline character

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 

    parseStringAndInitialize(input, students, size);

    printf("\nArray of Students:\n");
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
