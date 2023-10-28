#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return 0; // num is divisible by i, so it's not prime
            }
        }
        return 1; // num is prime
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n > 50) {
        printf("Invalid input for n. It must be in the range (1, 50].\n");
        return 1; // Exit with an error code
    }

    int myArray[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &myArray[i]);
    }

    // Sort the array using bubbleSort
    bubbleSort(myArray, n);

    // CHECKING PRIME NUMBER
    for (int i = 0; i < n; i++) {
        if (isPrime(myArray[i])) {
            printf("YES ");
        } else {
            printf("NO ");
        }
    }

    return 0; // Exit with success code
}
