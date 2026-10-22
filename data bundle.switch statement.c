#include <stdio.h>

int main() {
    int choice;

    printf("===== Mobile Data Bundles =====\n");
    printf("Option   Bundle    Cost (KES)\n");
    printf("1        100 MB    50\n");
    printf("2        500 MB    200\n");
    printf("3        1 GB      350\n");
    printf("4        2 GB      600\n");
    printf("===============================\n");

    printf("Enter your choice (1-4): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid choice\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("You selected: 100 MB bundle\n");
            printf("Cost: KES 50\n");
            break;
        case 2:
            printf("You selected: 500 MB bundle\n");
            printf("Cost: KES 200\n");
            break;
        case 3:
            printf("You selected: 1 GB bundle\n");
            printf("Cost: KES 350\n");
            break;
        case 4:
            printf("You selected: 2 GB bundle\n");
            printf("Cost: KES 600\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}