#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int *q;
    q = (int *)calloc(5, sizeof(int)); // --allocate of 20 bytes -- 5 block -- continue -- array

    // scan
    for (i = 0; i < 5; i++)
    {
        printf("Enter number");
        scanf("%d", &q[i]);
    }

    // print
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", q[i]);
    }

    free(q);

    return 0;
}