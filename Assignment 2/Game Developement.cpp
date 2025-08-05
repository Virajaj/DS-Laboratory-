/*
write a game development program that implements the Bubble Sort algorithm. 
The program     will simulate a simple game where the player can input a 
set of numbers, and the numbers         will be sorted using Bubble Sort 
to simulate a "level-up" scenario where the player's scores are sorted in 
ascending order.

*/
#include <stdio.h>

int main()

{    
    int n=3;
    int player1[n];
    int player2[n];
    int i=0;
    int c=0;
    printf("For Player 1:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&player1[i]);
    }
    for(int pass=0;pass<n;pass++)
    {
        for(int j=0;j< n-i-1 ;j++)
        {
            if(player1[j]<player1[j+1])
            {
                c = player1[j];
                player1[j]=player1[j+1];
                player1[j+1] = c;
            }
        }
    }
    printf("For Player 2: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&player2[i]);
    }
    for(int pass=0;pass<n;pass++)
    {
        for(int j=0;j< n-i-1 ;j++)
        {
            if(player2[j]<player2[j+1])
            {
                c = player2[j];
                player2[j]=player2[j+1];
                player2[j+1] = c;
            }
        }
    }
    printf("Sorted scores for Player 1:\n");
    for(int m=0;m<n;m++)
    {
        printf(" %d ",player1[m]);
    }
    printf("\nSorted scores for Player 2:\n");
    for(int k=0;k<n;k++)
    {
        printf(" %d ",player2[k]);
    }
    int p1total = 0;
    for(int x=0;x<n;x++)
    {
        p1total += player1[x];
    }
    int p2total = 0;
    for(int y=0;y<n;y++)
    {
        p2total += player2[y];
    }
    if(p1total>p2total)
    {
        printf("\nPlayer 1 wins !! The score for Player 1 is :%d and score for Player 2 is :%d",p1total,p2total);
    }
    else if(p1total<p2total)
    {
        printf("\nPlayer 2 wins !! The score for Player 1 is :%d and score for Player 2 is :%d",p1total,p2total);
    }
    else
    {
        printf("\nIt's a tie !! The score for Player 1 is :%d and score for Player 2 is :%d",p1total,p2total);
    }    
    return 0;
}
               





