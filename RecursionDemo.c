#include <stdio.h>

void greet()
{

    printf(" hi ");
    greet(); // infinit --- stack overflow....
}


void pingPong()
{

    printf(" pingPong ");
}

void pong()
{

    printf(" pong ");
    pingPong();
    printf(" END of pong");
}

void ping()
{
    printf(" ping ");
    pong();
    printf(" END of ping");
}

void santa(int count)//1 
{                      // 5

    
    printf(" %d ",count); // P P P P P
    count++;           // 6

    if (count <= 5)
    {
        santa(count); //
    }
}

void banta(int count){
    printf(" %d ",count);//5 
    count--; 

    if(count>=1){ 
        banta(count); 
    }
}
void santabanta(int s,int e){
    
}

int main()
{

    // ping();
    // pong();
    // pingPong();
    // greet();

    santa(1); //1 2 3 4 5
    banta(5); //5 4 3 2 1
    santabanta(5,10);// 5 6 7 8 9 10
    return 0;
}

// output ?
// infinite
// stack overflow

//1 to 5 
