#include<stdio.h>

int main(){

    int a;//4 byte  --- normanl variables are used to store values . 
    int *p;  // pointer variables are used to store memory address. 

    p = &a; // *   & 
    printf(" %d %d ",sizeof(int),sizeof(a));

    //where? memory address ? 

    printf(" %u %u ",p,&a);

    return 0;
}