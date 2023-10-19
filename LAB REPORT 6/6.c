//WAP to enter number of odd and even numbers in array
#include <stdio.h>

int main() {
    int arr[10];
    int i, even_count = 0, odd_count = 0;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Number of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);

    return 0;
}
