/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define QUEUE_SIZE 5

struct queue{
    int items[QUEUE_SIZE];
    int front;
    int rear;
};

typedef struct queue QUEUE;

int insert_rear(int item,QUEUE *q){
    if(q->rear == QUEUE_SIZE-1){
        printf("\nSorry Queue is full so cannot insert iteml in the queue\n");
        return 0;
    }
    (q->rear)++;
    q->items[q->rear] = item;
    
}

int delete_front(QUEUE *q){
    
    if(q->front > q->rear){
        printf("\nCannot delete from the queue, because its empty\n");
        return 0;
    }
    printf("The element deleted is %d\n",q->items[q->front]);
    (q->front)++;
    
    if(q->front > q->rear){
        q->front = 0;
        q->rear = -1;
    }
}

int insert_front(int item,QUEUE *q){
    if(q->front ==0 && q->front ==-1){
        q->items[++(q->rear)]=item;
    }else if(q->front!=0){
        q->items[--(q->front)]=item;
    }else{
        printf("Insertion is not possible from from end of the queue");
        return 0;
    }
}

int delete_rear(QUEUE *q){
    if(q->front>q->rear){
        printf("No element to delete!");
        return 0;
    }
    printf("The element deleted is %d\n",q->items[q->rear]);
    (q->rear)--;
    
    if(q->front > q->rear){
        q->front = 0;
        q->rear = -1;
    }
    
}

int display(QUEUE *q){
    int i;
    if(q->front > q->rear){
        printf("\nCannot display the queue, because it's empty\n");
        return 0;
    }
    printf("Queue contents are : ");
    for(i=q->front;i<= q->rear ;i++){
        printf(" %d ",q->items[i]);
    }
    
}

int main(){
    QUEUE q;
    q.rear=-1;
    q.front=0;
    int input,item;
    for(;;){
        printf("\n1.Insert Rear");
        printf("\n2.Delete front");
        printf("\n3.Insert front");
        printf("\n4.Delete rear");
        printf("\n5.Display the queue");
        printf("\n6.To Exit");
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
                    
            case 3: printf("Enter the element to insert : ");
                    scanf("%d",&item);
                    insert_front(item,&q);
                    display(&q);
                    break;
                    
            case 4: delete_rear(&q);
                    display(&q);
                    break;
            
            case 5: display(&q);
                    break;
                    
            case 6 : exit(0);        
                    
            default : printf("Invalid choice");
                    break;
        }
    }
}

