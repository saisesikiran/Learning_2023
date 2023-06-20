#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};  // Predefined array
    int len = sizeof(arr) / sizeof(arr[0]);
    int i, sum = 0;
    float avg;

    for (i = 0; i < len; i++)
    {
        sum += arr[i];
    }

    avg = (float)sum / len;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}

