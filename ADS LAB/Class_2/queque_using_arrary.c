// Write a c program to create a queque and perfrom
//(i)Enqueque (ii)dequeque (iii) tranversal

#include <stdio.h>
#define Max 5
int queque[Max];
int front = 0;
int rear = -1;
void Enqueque(){
    int value;
    if(rear == Max-1){
        printf("Queque is overflow\n");
        return;
    }
    printf("Enter the value you want to enqueque : ");
    scanf("%d",&value);
    rear++;
    queque[rear] = value;
}
void dequeque(){
    if(front > rear){
        printf("Queque is underflow\n");
        return;
    }
    printf("%d is dequeque\n",queque[front]);
    front++;
}
void traversal(){
    if(front > rear){
        printf("Queque is empty\n");
        return;
    }
    for(int i = front; i <= rear;i++){
        printf("%d ",queque[i]);
    }
    printf("\n");
}
int main(){
    int choice;
    printf("Queque interface\n");
    printf("1.Enqueque\n2.Dequeque\n3.Traserval\n4.Exit\n");
    while(1){
        printf("Enter the choice for the operation : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : 
                Enqueque();
                break;
            case 2 : 
                dequeque();
                break;
            case 3 :
                traversal();
                break;
            case 4 : 
                return 0;
        }
    }
    return 0;
}