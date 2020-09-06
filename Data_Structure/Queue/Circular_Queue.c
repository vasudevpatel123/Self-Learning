#include<stdio.h>
#include<stdlib.h>

#define QUEUE_SIZE 5

struct queue{
    int f;
    int r;
    int items[QUEUE_SIZE];
    int count;
};

typedef struct queue QUEUE;

int insert_rear(int item,QUEUE *q){
    if(q->count==QUEUE_SIZE){
        printf("Queue is full cannot insert");
        return 0;
    }
    q->r=(q->r+1)%QUEUE_SIZE;
    q->items[q->r]=item;
    (q->count)++;
}
 
int delete_front(QUEUE *q){
    if(q->count==0){
        printf("Queue is empty, cannot delete");
        return 0;
    }
    q->f=(q->f+1)%QUEUE_SIZE;
    (q->count)--;
}

int display(QUEUE *q){
    int i,j;
    if(q->count==0){
        printf("Queue is empty, cannot display elements");
        return 0;
    }
    printf("Contents of the elements are :");
    j=q->f;
    for(i=1;i<=q->count;i++){
        printf("%d",q->items[j]);
        j=(j+1)%QUEUE_SIZE;
    }
}

int main(){
    QUEUE q;
    q.f=0;
    q.r=-1;
    q.count=0;
    int input,item;
    for(;;){
        printf("\n1.Insert Rear");
        printf("\n2.Delete front");
        printf("\n3.Display the queue");
        printf("\n4.To Exit");
        printf("\nEnter the choice : ");
        scanf("%d",&input);
        switch(input){
            
            case 1: printf("Enter the element to insert : ");
                    scanf("%d",&item);
                    insert_rear(item,&q);
                    display(&q);
                    break;
                    
            case 2: delete_front(&q);
                    display(&q);
                    break;
            
            case 3: display(&q);
                    break;
                    
            default : printf("Invalid choice");
                    break;
        }
    }
}



