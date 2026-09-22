// Write a C program that uses functions to perform the following
//  operations on Single linked list:
// i) Creation
// ii) Insertion
// iii) Deletion
// iv) Traversal in both ways.

#include <stdio.h>
#include <stdlib.h>
struct link_list{
    int value;
    struct link_list *add_next_node;
};
struct link_list *start;
struct link_list *pointer;
void creation(){
    int n;
    printf("Enter the Number of Node : ");
    scanf("%d",&n);
    for(int i=0; i<n ;i++){
        if(i==0){
            pointer = malloc(sizeof(struct link_list));
            start = pointer;
        }
        else{
            pointer->add_next_node = malloc(sizeof(struct link_list));
            pointer = pointer->add_next_node;
        }
        printf("Enter the Value : ");
        scanf("%d",&pointer->value);
        pointer->add_next_node = NULL;
    }
}
void insert(){
    int x;
    printf("1.Insert at front.\n");
    printf("2.Insert at end : \n");
    printf("3.Insert in between : \n");
    printf("Enter the choice : ");
    scanf("%d",&x);
    switch(x){
        case 1:
            pointer = malloc(sizeof(struct link_list));
            pointer->add_next_node = start;
            start = pointer;
            printf("Enter the value : ");
            scanf("%d",&pointer->value);
            break;
        case 2:
            pointer = start;
            while(pointer != NULL){
                if(pointer->add_next_node == NULL){
                    break;
                }
                pointer = pointer->add_next_node;
            }
            pointer->add_next_node = malloc(sizeof(struct link_list));
            pointer = pointer->add_next_node ;
            pointer->add_next_node = NULL;
            printf("Enter the value : ");
            scanf("%d",&pointer->value);
            break;
        case 3:
            int n;
            printf("Enter the position : ");
            scanf("%d",&n);
            pointer = start;
            for(int i=1; i<n-1 ; i++){
                pointer = pointer->add_next_node;
            }
            struct link_list *temp = pointer->add_next_node;
            pointer->add_next_node = malloc(sizeof(struct link_list));
            pointer = pointer->add_next_node ;
            pointer->add_next_node = temp;
            printf("Enter the value : ");
            scanf("%d",&pointer->value);
            break;
    }
}
void deletion(){
    int x;
    printf("1.Delete at front.\n");
    printf("2.Delete at end : \n");
    printf("3.Delete in between : \n");
    printf("Enter the choice : ");
    scanf("%d",&x);
    switch(x){
        case 1:
            pointer = start;
            start = pointer->add_next_node;
            printf("%d is deleted\n", pointer->value);
            free(pointer);
            break;
        case 2:
            pointer = start;
            struct link_list *sec_last;
            while(pointer != NULL){
                if(pointer->add_next_node == NULL){
                    break;
                }
                sec_last = pointer;
                pointer = pointer->add_next_node;
            }
            sec_last->add_next_node = NULL;
            printf("%d is deleted\n", pointer->value);
            free(pointer);
            break;
        case 3:
            int n;
            printf("Enter the position : ");
            scanf("%d",&n);
            pointer = start;
            struct link_list *prev_point;
            for(int i=1; i<n ; i++){
                prev_point=pointer;
                pointer = pointer->add_next_node;
            }
            prev_point->add_next_node = pointer->add_next_node;
            printf("%d is deleted\n", pointer->value);
            free(pointer);
            break;
    }
}
void traversal(){
    pointer = start;
    while(pointer != NULL){
        printf("%d ",pointer->value);
        pointer = pointer -> add_next_node;
    }
    printf("\n");
}
int main(){
    int choice;
    printf("Linked List Interface.\n");
    printf("1.Creation\n");
    printf("2.Insertion\n");
    printf("3.Deletion\n");
    printf("4.Traversal\n");
    printf("5.Exit\n");
    while(1){
        printf("Enter your Operation : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                creation();
                break;
            case 2:
                insert();
                break;
            case 3:
                deletion();
                break;
            case 4:
                traversal();
                break;
            case 5:
                return 0;
            default :
                printf("Enter the correct choice. \n");
                break;
        }
    }
    return 0;
}