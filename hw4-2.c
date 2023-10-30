#include <stdio.h>

int main() {
    int myID[6] = {123, 456, 789, 336, 775, 566};
    int myPW[6] = {456, 789, 888, 558, 666, 221};
    int Price[6] = {9000, 5000, 6000, 10000, 12000, 7000};
    
    int n;
    
    //printf("Enter a number for login tries: ");
    scanf("%d", &n);
    
    int tries = 0;
    
    while (tries < n) {
        int id, pw;
        
        scanf("%d", &id);
        
        scanf("%d", &pw);
        
        int i;
        for (i = 0; i < 6; i++) {
            if (myID[i] == id && myPW[i] == pw) {
                printf("%d\n", Price[i]);
                tries++;
                break;
            }
        }
        
        if (i == 6) {
            printf("Error\n");
            tries++;
        }
    }
    
    if (tries >= n) {
        return 0;
    }

    return 0;
}
