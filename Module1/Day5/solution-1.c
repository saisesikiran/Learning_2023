#include <stdio.h>

struct Box
 {
    float length;
    float width;
    float height;
};

// Function to calculate the volume of the box
float calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

float calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() 
{
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    printf("Enter the length of the box: ");
    scanf("%f", &(boxPtr->length));

    printf("Enter the width of the box: ");
    scanf("%f", &(boxPtr->width));

    printf("Enter the height of the box: ");
    scanf("%f", &(boxPtr->height));

    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);

    return 0;
}