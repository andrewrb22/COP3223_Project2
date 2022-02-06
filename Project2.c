#include <stdio.h>
#include <stdlib.h>

int main()

{

    // variable

    int studentID, courseID1, courseID2, numOfCourses, i;

    char ch;

    double creditHour = 120.25;

    double healthAndIDFee = 35.00;

    double totalFee = 0.0;

    // Student ID

    printf("Enter the Student's ID:\n");

    scanf("%d", &studentID);

    // Number of courses

    printf("Enter how many courses taken (upto 2):\n");

    scanf("%d", &numOfCourses);

    // if/else statement based on the number of courses

    if (numOfCourses == 1)

    {

        printf("Enter the course number:\n");

        scanf("%d", &courseID1);
    }
    else if (numOfCourses > 2)

    {

        printf("Sorry, we can’t process your request this time-invalid number of courses\n");

        printf("\t\tTry again. Goodbye! \n");
    }

    else

    {

        printf("Enter the 2 course numbers separated by -: (like 2356-8954)\n");

        scanf("%d%c%d", &courseID1, &ch, &courseID2);

        printf("Thank you!\n");

        printf("PRESS ANY KEY TO CONTINUE...");

        scanf("%c", &ch);

        ch = fgetc(stdin);
    }
    // Invoice

    printf("\n\nVALENCE COMMUNITY COLLEGE\n");

    printf("ORLANDO FL 10101");

    printf("\n**************************\n");

    printf("Fee Invoice Prepared for Student V%d\n", studentID);

    printf("1 Credit Hour = $120.25\n");

    printf("CRN\tCredit Hours\n");

    // display the health and id fee

    printf("Health & ID Fees \t$%.2f", healthAndIDFee);

    // Final Total

    totalFee = totalFee + healthAndIDFee;

    printf("\n-----------------------------\n");

    // Total fee

    printf("Total Payments \t\t$%.2f", totalFee);

    return 0;
}