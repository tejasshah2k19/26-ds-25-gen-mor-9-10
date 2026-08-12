#include <stdio.h>
#define SIZE 5

struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

struct student s[SIZE];

void getData()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter name and marks of three subjects");
        scanf("%s%d%d%d", &s[i].name, &s[i].maths, &s[i].eng, &s[i].sci);
        //perc grade 
    }
}

void calcGradePerc()
{
    for (int i = 0; i < SIZE; i++)
    {
        s[i].perc = (s[i].maths + s[i].sci + s[i].eng) / 3.0;

        if (s[i].perc > 35)
        {
            s[i].grade = 'P';
        }
        else
        {
            s[i].grade = 'F';
        }
    }
}

void display(){
    printf("\nName\tMaths\tSci\tEng\tPerc\tGrade\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s\t%d\t%d\t%d\t%f\t%c\n",  s[i].name,  s[i].maths,  s[i].eng, s[i].sci,s[i].perc,s[i].grade);
    }
}



int main()
{

    // , s3;
    // struct student s2;

    struct student *p;

     
    // getData();
    // calcGradePerc();
    // display(); 

    // printf("Enter name and marks of three subjects : ");
    // scanf("%s%d%d%d",&p.name,&p.maths,&p.sci,&p.eng);

    // printf("\nName = %s\nMaths = %d\nSci = %d\nEng = %d\n",p.name,p.maths,p.sci,p.eng);




    printf("Enter name and marks of three subjects : ");
    scanf("%s%d%d%d",&p->name,&p->maths,&p->sci,&p->eng);

    printf("\nName = %s\nMaths = %d\nSci = %d\nEng = %d\n",p->name,p->maths,p->sci,p->eng);



    return 0;
}