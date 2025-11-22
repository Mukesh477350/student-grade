#include <stdio.h>

char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    int n, subjects, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    char name[50];
    float marks[50][50], total, avg;

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", name);

        total = 0;
        for (j = 0; j < subjects; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &marks[i][j]);
            total += marks[i][j];
        }

        avg = total / subjects;
        char grade = calculateGrade(avg);

        printf("\n--- Result for %s ---\n", name);
        printf("Total Marks: %.2f\n", total);
        printf("Average: %.2f\n", avg);
        printf("Grade: %c\n", grade);
        printf("----------------------\n");
    }

    return 0;
}
