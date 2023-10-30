#include <stdio.h>

void createMatrix(int n, int matrix[][n]) {
    // printf("Enter the values for the %dx%d matrix:\n", n, n);
    // Input values into the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // printf("%d %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// void printMatrix(int n, int matrix[][n]) {
//     printf("Generated %dx%d matrix:\n", n, n);
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d\t", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }
// boy = row and girl=column
void findHighestValueInEachRow(int n, int matrix[][n]) {
    for (int i = 0; i < n; i++) {
        int max = matrix[i][0];
        int col = 0;

        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                col = j;
            }
        }

        printf("boy %d pair with girl %d\n", i + 1, col + 1);
    }
}
int main() {
    int n;

    // printf("Enter the size (n) of the matrix: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Matrix size must be a positive integer.\n");
        return 1;
    }

    int matrix[n][n];

    createMatrix(n, matrix);
    // printMatrix(n, matrix);
    findHighestValueInEachRow(n, matrix);

    return 0;
}

