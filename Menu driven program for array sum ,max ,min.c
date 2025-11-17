#include <stdio.h>

int main() {
    int n, choice;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    printf("1. Sum\n2. Max\n3. Min\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            int sum = 0;
            for(int i=0;i<n;i++) sum += a[i];
            printf("Sum = %d", sum);
            break;
        }

        case 2: {
            int max = a[0];
            for(int i=1;i<n;i++)
                if(a[i] > max) max = a[i];
            printf("Max = %d", max);
            break;
        }

        case 3: {
            int min = a[0];
            for(int i=1;i<n;i++)
                if(a[i] < min) min = a[i];
            printf("Min = %d", min);
            break;
        }

        default:
            printf("Invalid!");
    }

    return 0;
}
