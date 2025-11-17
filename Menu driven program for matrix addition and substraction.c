#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r, col, choice;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter Matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&b[i][j]);

    printf("1. Addition\n2. Subtraction\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            for(int i=0;i<r;i++)
                for(int j=0;j<col;j++)
                    c[i][j] = a[i][j] + b[i][j];
            break;
        case 2:
            for(int i=0;i<r;i++)
                for(int j=0;j<col;j++)
                    c[i][j] = a[i][j] - b[i][j];
            break;
        default:
            printf("Invalid choice!");
            return 0;
    }

    printf("Result:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<col;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
