#include <stdio.h>
#include <math.h>

int main() {
    int ch;
    float a, l, w, h, r;

    printf("1. Volume of Cube\n");
    printf("2. Volume of Cuboid\n");
    printf("3. Volume of Sphere\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Enter side: ");
            scanf("%f", &a);
            printf("Volume = %.2f\n", a * a * a);
            break;

        case 2:
            printf("Enter length width height: ");
            scanf("%f %f %f", &l, &w, &h);
            printf("Volume = %.2f\n", l * w * h);
            break;

        case 3:
            printf("Enter radius: ");
            scanf("%f", &r);
            printf("Volume = %.2f\n", (4.0/3.0) * 3.1416 * r * r * r);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
