#include <stdio.h>

int main() {
    int units;
    double bill;

    printf("Enter the number of water units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a non-negative whole number.\n");
        return 1;
    }

    if (units <= 30) {
        /* First 30 units at 20 KES */
        bill = units * 20.0;
    } else if (units <= 60) {
        /* First 30 units at 20 KES, remaining units at 25 KES */
        bill = (30 * 20.0) + (units - 30) * 25.0;
    } else {
        /* First 30 at 20 KES, next 30 at 25 KES, rest at 30 KES */
        bill = (30 * 20.0) + (30 * 25.0) + (units - 60) * 30.0;
    }

    printf("Total water bill: KES %.2f\n", bill);

    return 0;
}
