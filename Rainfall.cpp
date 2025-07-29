/*
Write a program to track rainfall data for 3 cities over 4 months.
Using a 2D array, we can store the data, calculate the average rainfall
for each city, and display the rainfall data in a tabular format.
*/
#include<stdio.h>
int main()
{
    float rainfall[3][4];
    float average = 0;
    float total = 0;

    printf("\nEnter rainfall data for 3 cities\n");
    for(int c = 0; c < 3; c++)
    {
        printf("For city %d:\n", c + 1);

        for(int m = 0; m < 4; m++)
        {
            printf("For month %d:\n", m + 1);
            scanf("%f", &rainfall[c][m]);
        }
    }

    printf("Rainfall Tracker:\n");
    printf("SNO.\tCity Name\t M1\t\t M2\t\t M3\t\t M4 %-20s Average", " ");
    for(int i = 0; i < 3; i++)
    {
        total = 0; 
        printf("\n%d\tCity %d\t\t", i + 1, i + 1);
        for(int j = 0; j < 4; j++)
        {
            printf("%f\t", rainfall[i][j]);
            total += rainfall[i][j];
        }
        average = total / 4;
        printf(" %f", average);
    }

    return 0;
}

