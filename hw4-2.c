#include <stdio.h>

int main() {
    int myID[6] = {123, 456, 789, 336, 775, 566};
    int myPW[6] = {456, 789, 888, 558, 666, 221};
    int Price[6] = {9000, 5000, 6000, 10000, 12000, 7000};
    
    int n;
    
//    printf("Enter a number (1 to 6) to print elements: ");
    scanf("%d", &n);
    
    if (n >= 1 && n <= 6) {
        for (int i = 0; i < n; i++) {
            printf("%d ", myID[i]);
        }
        
        printf("\n");
        for (int i = 0; i < n; i++) {
            printf(" %d",myPW[i]);
        }
        
        printf("\n");
        for (int i = 0; i < n; i++) {
            printf("%d ",Price[i]);
        }
    } else {
        printf("Error.\n");
    }
    
    return 0;
}

