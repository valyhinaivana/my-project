#include <stdio.h>

int main() {
    int number;

    // We ask the user to enter the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // We define the sign of the number
    if (number > 0) {
        printf("A positive number\n");
    } else if (number < 0) {
        printf("A negative number\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}
