#include <stdio.h>

int main() {
    FILE *file;
    float amount, totalSales = 0.0;

    // Open the file for reading
    file = fopen("sales.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error: Unable to open sales.txt\n");
        return 1;
    }

    // Read all transactions and calculate total sales
    while (fscanf(file, "%f", &amount) == 1) {
        totalSales += amount;
    }

    // Display the total sales
    printf("Total sales for the day: %.2f\n", totalSales);

    // Close the file
    fclose(file);

    printf("File closed successfully.\n");

    return 0;
}x
