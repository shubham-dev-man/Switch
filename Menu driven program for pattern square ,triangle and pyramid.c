#include <stdio.h>

int main() {
    int choice, n;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\n1. Square\n2. Triangle\n3. Pyramid\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 2:
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 3:
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= n - i; j++)
                    printf(" ");
                for(int k = 1; k <= 2*i - 1; k++)
                    printf("*");
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
