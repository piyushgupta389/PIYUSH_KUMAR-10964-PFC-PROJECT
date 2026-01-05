// PIYUSH KUMAR
// ERP - 10964

// PROJECT TITLE – MARKS GRADING AND TOTAL CALCULATION

// AIM - The aim of this project is to create a  Marks Grading and Total Calculation System that calculates the total marks,percenatage and assign grades for multiple subjects based on user input

// DETAILED WALKTHROUGH ( HOW TO APPROACH THE PROBLEM ) – Create a 1D array for storing subject marks, Loops for calculation and total calculation, arthimetic operators for sum and percentage, conditional statement for grade assignment.
#include <stdio.h>
int main()
{
    int n, i;
    float marks[50];
    float total = 0, percentage;
    char grade;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        if (marks[i] >= 0 && marks[i] <= 100)
        {
            total += marks[i];
        }
        else
        {
            printf("Invalid Marks Entered by user\n");
        }
    }

    percentage = (total / (n * 100)) * 100;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 45)
        grade = 'D';
    else
        grade = 'F';

    printf("\n--- Result ---\n");
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}