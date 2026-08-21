// #include<stdio.h>
// #include<stdlib.h>


// int main(){

//     char *name;
//     int *maths;
//     int *sci;
//     int *eng;
    
//     float *perc;
//     char *grade; 


//     name  = (char*) malloc(sizeof(char)*30);
//     maths = (int*) malloc(sizeof(int));
//     sci = (int*) malloc(sizeof(int));
//     eng = (int*) malloc(sizeof(int));
    
//     perc = (float*) malloc(sizeof(float));
//     grade = (char*) malloc(sizeof(char)); 

//     printf("enter name and marks of three subjects ");
//     scanf("%s%d%d%d",name,&maths,&sci,&eng);
//     printf("%s %d %d %d",name,maths,sci,eng);
//      *perc = ( *maths + *sci + *eng)/3.0;

//     //if 
//     if(*perc >= 35){
//         *grade = 'P';
//     }else{
//         *grade = 'F';
//     }


//     // pf marksheet 
//     printf("\nName = %s\nMaths = %d\nSci = %d\nEng = %d\nPerf = %f\nGrade = %c",*name,*maths,*sci,*eng,*grade,*perc);


//     return 0;
// }








#include<stdio.h>
#include<stdlib.h>


struct student {
    char name[30];
    int maths;
    int sci;
    int eng;
    
    float perc;
    char grade; 

};


int main(){

 
    struct student *s;//structure pointer 


    s =(struct student*) malloc(sizeof(struct student));


    printf("enter name and marks of three subjects ");
    scanf("%s%d%d%d",s->name,&s->maths,&s->sci,&s->eng);
    printf("%s %d %d %d",s->name,s->maths,s->sci,s->eng);

    s->perc = ( s->maths + s->sci + s->eng) / 3.0;

    //if 
    if(s->perc >= 35){
        s->grade = 'P';
    }else{
        s->grade = 'F';
    }


    // pf marksheet 
    printf("\nName = %s\nMaths = %d\nSci = %d\nEng = %d\nPerc = %f\nGrade = %c",s->name,s->maths,s->sci,s->eng,s->perc,s->grade);


    return 0;
}










