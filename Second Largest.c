#include <stdio.h>

int main(void) {
    int a[100], n, i, min1, min2;

    printf("How many elements in the array? ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least 2 elements are required to find the second smallest.\n");
        return 1;
    }

    printf("Enter %d integer values:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array contents: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    min1 = a[0];
    min2 = a[1];

    if (min2 < min1) {
        int temp = min1;
        min1 = min2;
        min2 = temp;
    }

    for (i = 2; i < n; i++) {
        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if (a[i] < min2 && a[i] != min1) {
            min2 = a[i];
        }
    }

    printf("\nSecond smallest element in the array: %d\n", min2);

    return 0;
}

