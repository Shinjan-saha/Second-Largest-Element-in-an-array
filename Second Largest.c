#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return -1;
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int elements[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &elements[i]);
    }

    int secondLargestElement = findSecondLargest(elements, size);

    if (secondLargestElement != -1) {
        printf("The second largest element in the array is: %d\n", secondLargestElement);
    } else {
        printf("There is no second largest element in the array.\n");
    }

    return 0;
}
