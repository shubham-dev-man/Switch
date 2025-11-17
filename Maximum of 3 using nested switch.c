#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    switch(a > b) {
        case 1:
            switch(a > c) {
                case 1: printf("Max = %d\n", a); break;
                case 0: printf("Max = %d\n", c); break;
            }
            break;

        case 0:
            switch(b > c) {
                case 1: printf("Max = %d\n", b); break;
                case 0: printf("Max = %d\n", c); break;
            }
            break;
    }
    return 0;
}
