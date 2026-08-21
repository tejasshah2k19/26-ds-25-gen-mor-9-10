#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; // implicit - 4 byte

    // pointer
    int *p;

    int i;
    p = (int *)malloc(sizeof(int)); // GCC:4 TC:2  --allocate

    printf("enter num");
    scanf("%d", p);

    printf(" %d ", *p);
    free(p); // release

    printf("===");
    // addition of two numbers

    return 0;
}