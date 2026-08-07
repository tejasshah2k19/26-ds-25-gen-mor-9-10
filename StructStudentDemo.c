#include <stdio.h>

struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade; 
};

int main()
{

    struct student s,s3; 
    struct student s2; 
 
    printf("Enter name and marks of three subjects");
    scanf("%s%d%d%d",&s.name,&s.maths,&s.eng,&s.sci);

    s.perc = (s.maths+s.sci+s.eng) / 3.0; 

    if(s.perc > 35 ){
        s.grade = 'P';
    }else{
        s.grade = 'F'; 
    }

    printf("\nName  Maths  Sci  Eng  Perc Grade");
    printf("\n%s    %d    %d    %d    %.2f    %c ",s.name,s.maths,s.sci,s.eng,s.perc,s.grade);


    return 0;
}