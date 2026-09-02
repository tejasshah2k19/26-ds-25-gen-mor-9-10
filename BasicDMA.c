#include<stdio.h>

int main(){

    char x; 
 

    int a;//4 byte  --- normanl variables are used to store values . 
    int *p;  // pointer variables are used to store memory address. 

    p = &a; // *   & 
    printf(" %d %d ",sizeof(int),sizeof(a));

    //where? memory address ? 

    printf(" %u %u ",p,&a);

    x = 'a';
    printf(" %c ",x);

    x = 97; 
    printf(" %c ",x);


    return 0;
}