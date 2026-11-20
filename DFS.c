#include <stdio.h>

struct Edge
{
    int src, dest;
};

struct Edge edges[100];

int totalVertax;
int visited[100];
int totalEdges;
int count = 0;
int visitedCount = 0;


// check whether vartex is alreday visited
int CheckVisit(int vertax){

    for (int i = 0; i < visitedCount; i++)
    {
        if (visited[i] == vertax)
        {
            return 0;
        }
    }
    
    return 1;
}


// DFS function
void DFS(int src)   // start 0  ->  dfs(0) -> 3 -> 4 -> 2 -> 6 -> 5 
{
    for (int i = 0; i < totalEdges * 2; i++) //   total edges - > 4
    {
        /*
        0 3
        3 4
        4 2
        2 6
        4 1
        6 5
        5 0
        1 2 
        1 5
 
        */
        if (edges[i].src == src && CheckVisit(edges[i].dest))
        {
 

            visited[visitedCount] = edges[i].dest;
            visitedCount++;

            printf(" %d", edges[i].dest);//3 4 2 6  5
            
            if(visitedCount < totalVertax){ 
                DFS(edges[i].dest);//recursion --- stack  
            }
            
        }
    }

    
    // if (count < totalVertax && count < visitedCount)
    // {
    //     Bfs(visited[count]);
    // }
}

int main()
{

    int src, dest;

    printf("\nHow many vertices do you have ?");
    scanf("%d", &totalVertax);

    printf("\nHow many Edges do you have ?");
    scanf("%d", &totalEdges);


    // input edges 

    for (int  i = 0; i < totalEdges; i++)
    {
        printf("Enter the Source and destination :");
        scanf("%d %d", &src, &dest);


        // first direction
        
        edges[i * 2].src = src;
        edges[i * 2].dest = dest;


        // reverse direction(Ud Graph)
        edges[i * 2 + 1].src = dest;
        edges[i * 2 + 1].dest = src;
    }
    
    printf("Enter the  Starting Vertax :");
    scanf("%d", &src);

    visited[visitedCount] = src;
    visitedCount++;

    printf("\n DFS T :");
    printf("%d", src);

    DFS(src);

    return 0;
}