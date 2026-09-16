#include<stdio.h>
#include<stdlib.h>


struct node {
    int data; 
    struct node *next; 
    struct node *prev; 
};

struct node *head= NULL;
struct node *last = NULL ;


//[NULL|10|&20]   [&10|20|&30]         [&20|30|&40]        [&30|40|NULL]
//head                                                      newNode         
//                                                          last 
void addNode(int num){
    if(head == NULL){
        head = (struct node*) malloc(sizeof(struct node));
        head->data = num; 
        head->next = NULL;
        head->prev = NULL; 
        last = head; 
    }else{
        struct node *newNode = (struct node*) malloc(sizeof(struct node));
        newNode->data= num; 
        newNode->next=NULL; 
        newNode->prev=last; 
        last->next=newNode;
        last = newNode; 
    }
}


//[NULL|10|&20]   [&10|20|&30]         [&20|30|&40]        [&30|40|NULL]
//head                                                      newNode         
//  
void display(){
    struct node *p = head; 

    while( p != NULL ){ 
        printf(" %d ",p->data);//10 
        p = p->next;
    } 
}

int main(){


    addNode(10);
    addNode(20);
    addNode(30); 
    addNode(40); 
    display();
    return 0; 
}