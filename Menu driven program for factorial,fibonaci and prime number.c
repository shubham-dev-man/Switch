#include <stdio.h>

int main() {
    int choice, n, i, a = 0, b = 1, c;

    printf("1. Factorial\n2. Fibonacci\n3. Prime Check\nEnter choice: ");
    scanf("%d", &choice);

    printf("Enter number: ");
    scanf("%d", &n);

    switch(choice) {
        case 1: {
            long long fact = 1;
            for(i = 1; i <= n; i++)
                fact *= i;
            printf("Factorial = %lld", fact);
            break;
        }

        case 2:
            printf("Fibonacci Series: ");
            for(i = 1; i <= n; i++) {
                printf("%d ", a);
                c = a + b;
                a = b;
                b = c;
            }
            break;

        case 3:
            for(i = 2; i*i <= n; i++)
                if(n % i == 0) break;

            if(i*i > n) printf("Prime");
            else        printf("Not Prime");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
