#include <stdio.h>

int main() {
    int choice;
    float r, s, l, b;

    printf("1.Circle  2.Square  3.Rectangle\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            printf("Area = %.2f\n", 3.14 * r * r);
            break;

        case 2:
            printf("Enter side: ");
            scanf("%f", &s);
            printf("Area = %.2f\n", s * s);
            break;

        case 3:
            printf("Enter length and breadth: ");
            scanf("%f %f", &l, &b);
            printf("Area = %.2f\n", l * b);
            break;

        default:
            printf("Invalid choice\n");
    }
    return 0;
}
