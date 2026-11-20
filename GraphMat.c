#include <stdio.h>

int graph[4][4];

int main()
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\n%d is connected with %d?",i,j);
            scanf("%d",&graph[i][j]); // 
        }
    }

    printf("\nMatrix\n");
        for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf(" %d",graph[i][j]); // 
        }
        printf("\n");
    }

    //enter vertex ? 
    //3 
    //3 is connected with : 0 , 2 


    return 0;
}