#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    // Ask the librarian to enter a book title
    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);

    // Open the file in append mode
    file = fopen("borrowed_books.txt", "a");

    // Check whether the file opened successfully
    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // Write the book title to the file
    fprintf(file, "%s", title);

    // Close the file
    fclose(file);

    // Display confirmation message
    printf("Book title successfully stored in borrowed_books.txt.\n");

    return 0;
}
