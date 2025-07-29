#include<stdio.h>


int main()
{
    float temperature[3][7];
    float average = 0;
    float total = 0;

    printf("\nEnter temperature data for 3 cities\n");
    for (int c = 0; c < 3; c++)
    {
        printf("For city %d:\n", c + 1);
        for (int m = 0; m < 7; m++)
        {
            printf("For day %d:\n", m + 1);
            scanf("%f", &temperature[c][m]);
        }
    }

    printf("Temperature Tracker:\n");
    printf("SNO.\tCity Name\t D1\t\t D2\t\t D3\t\tD4%-15sD5\t\tD6\t\tD7\t %-5sAverage\n"," "," ");

    for (int i = 0; i < 3; i++)
    {
        total = 0; // reset total for each city
        printf("\n%d\tCity %d\t\t", i + 1, i + 1); // Merged into one line
        for (int j = 0; j < 7; j++)
        {
            printf("%f\t", temperature[i][j]);
            total += temperature[i][j];
        }
        average = total / 7;
        printf("%f", average);
    }

    return 0;
}
