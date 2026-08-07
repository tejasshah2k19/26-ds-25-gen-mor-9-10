#include <stdio.h>
#define SIZE 5

int arr[] = {10, 20, 30, 40, 50};

// 85 74 6 23 5 90
//                  i

// max = 90
// i

void arraySum(int sum, int index)
{ // 10,1

    sum = sum + arr[index]; // 30
    index++;                // 2
    if (index < SIZE)
    {
        arraySum(sum, index); // 30,2
    }
    else
    {
        printf("sum =  %d ", sum);
    }
}

int arraySum2(int i)
{ // 0

    if (i < SIZE)
    {
        return arr[i] + arraySum2(++i);
    }
    return 0;
}
//arraySum(0) -> 10 +  20  + 30 + 40 + 50 + 0 

void arrayMax(int max, int index)
{

    if (max < arr[index])
    {
        max = arr[index];
    }

    index++;

    if (index < SIZE)
    {
        arrayMax(max, index);
    }
    else
    {
        printf(" max =  %d ", max);
    }
}

int main()
{

    arraySum(0, 0); // 0,0

    arrayMax(arr[0], 0);

    // arrayOdd()

    printf("\n sum2 = %d", arraySum2(0));
    return 0;
}