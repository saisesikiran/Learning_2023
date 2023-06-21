#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student
 {
    int rollno;
    char name[20];
    float marks;
};


int compareStudents(const void* a, const void* b)
 {
    const struct Student* student1 = (const struct Student*)a;
    const struct Student* student2 = (const struct Student*)b;

   
    if (student1->marks < student2->marks)
        return 1;
    else if (student1->marks > student2->marks)
        return -1;
    else
        return 0;
}


void sortStudents(struct Student* students, int size) {
    qsort(students, size, sizeof(struct Student), compareStudents);
}

int main()
 {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    
    sortStudents(students, size);

    printf("\nArray of Students (After Sorting):\n");
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
