#include <stdio.h>

int main() {
    int mark;
    char grade;
    char choice;

    do {
        printf("\nEnter student's mark (0 - 100): ");
        scanf("%d", &mark);

        while (mark < 0 || mark > 100) {
            printf("Invalid mark! Please enter a mark between 0 and 100: ");
            scanf("%d", &mark);
        }

        if (mark >= 80) {
            grade = 'A';
        }
        else if (mark >= 70) {
            grade = 'B';
        }
        else if (mark >= 60) {
            grade = 'C';
        }
        else if (mark >= 50) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        printf("Mark: %d\n", mark);
        printf("Grade: %c\n", grade);

        printf("\nDo you want to enter another student's mark? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nProgram ended. Thank you!\n");

    return 0;
}