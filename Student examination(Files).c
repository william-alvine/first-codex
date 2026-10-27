#include <stdio.h>

struct Student {
    char name[100];
    char regNumber[30];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;

    // Open the binary file for reading
    file = fopen("results.dat", "rb");

    // Check whether the file opened successfully
    if (file == NULL) {
        printf("Error: Unable to open results.dat\n");
        return 1;
    }

    printf("STUDENT EXAMINATION RESULTS\n");
    printf("---------------------------\n");

    // Read and display all student records
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Student Name: %s\n", student.name);
        printf("Total Marks: %.2f\n", student.totalMarks);
        printf("---------------------------\n");
    }

    // Close the file
    fclose(file);

    return 0;
}