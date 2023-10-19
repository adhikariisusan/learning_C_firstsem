//wap to count total nunmber of negative elements in array
#include <stdio.h>

int main() {
    int arr[10];
    int i, count = 0;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }

    printf("Total number of negative elements: %d\n", count);

    return 0;
}
