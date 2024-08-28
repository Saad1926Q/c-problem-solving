#include <stdio.h>
#include <stdlib.h>

//Implement Queue and its operations in C

struct queue{
  int size;
  int f;
  int r;
  int * arr;
};

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct queue *q){
    if(q->r==-1){
        return  1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *q,int val){
    if(isFull(q)==1){
        printf("Queue is full\n");
    }else{
        q->r=q->r+1;
        q->arr[q->r]=val;
        printf("Enqueued value %d\n",val);
    }
    printf("\n");
}

void dequeue(struct queue *q){
    if(isEmpty(q)==1){
        printf("Queue is empty\n");
    }
    else{
        q->f=q->f+1;
        printf("Dequeued value %d\n",q->arr[q->f]);
    }
    printf("\n");
}

void display(struct queue *q){
    if(isEmpty(q)==1){
        printf("Queue is empty\n");
    }else{
        int i;
        printf("The Queue is\n");
        for(i=q->f+1;i<=q->r;i++){
            printf("%d ",q->arr[i]);
        }
    }
    printf("\n");
}


int main()
{
    struct queue q;
    q.r=-1;
    q.f=-1;
    
    printf("Enter size of queue:");
    scanf("%d",&q.size);
    
    q.arr=(int *)malloc(q.size*sizeof(int));
    
    enqueue(&q,10);
    enqueue(&q,10);
    display(&q);
    dequeue(&q);
    display(&q);
    enqueue(&q,10);
    
}
