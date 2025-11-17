#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str[100];
    int num, rev = 0, r;

    printf("1. Reverse Number\n2. Reverse String\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter number: ");
            scanf("%d", &num);

            while(num > 0) {
                r = num % 10;
                rev = rev * 10 + r;
                num /= 10;
            }
            printf("Reversed Number = %d", rev);
            break;

        case 2:
            printf("Enter string: ");
            scanf(" %[^\n]", str);
            strrev(str);
            printf("Reversed String = %s", str);
            break;

        default:
            printf("Invalid choice!");
    }
    return 0;
}
