#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int info;
    struct node *link;
};

typedef struct node* NODE;

NODE insert_front(int item,NODE first){
    NODE newnode;
    newnode=(NODE)malloc(sizeof(NODE));
    if(newnode==NULL){
        printf("Out of memory");
        exit(1);
    }
    newnode->info=item;
    newnode->link=first;
    return newnode;
}

int display(NODE first){
    NODE temp;
    if(first==NULL){
        printf("List is empty\n");
        return 0;
    }
    printf("Elements of the list are : ");
    temp=first;
    while(temp!=NULL){
        printf(" %d ",temp->info);
        temp=temp->link;
    }
    printf("\n");
}

int main(){
    NODE first=NULL;
    int input,item;
    for(;;){
        
        printf("1.Enter node to insert :  \n");
        printf("2.Display list : \n");
        printf("3.Exit : \n");
        printf("Enter your choice : \n");
        scanf("%d",&input);
        switch(input){
            case 1: printf("Enter the element to be inserted : ");
                    scanf("%d",&item);
                    first=insert_front(item,first);
                    display(first);
                    break;
            case 2: display(first);
                    break;
            case 3:exit(0);
            default : printf("Invalid choice");
        }
    }
}






