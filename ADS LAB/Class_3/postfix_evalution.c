// Write a C program that uses stack operations to 
// evaluate a postfix expression.

#include <stdio.h>
#define Max 30
int stack[Max];
int top = -1;
void push(int x){
    if(top == Max -1){
        printf("Stack is overflow.");
        return;
    }
    top++;
    stack[top] = x;
}
int pop(){
    if(top == -1){
        printf("Stack is underflow.");
        return 0;
    }
    int x = stack[top];
    top--;
    return x;
}
int powr(int x, int y){
    int prod = 1;
    for(int i=0;i<y;i++){
        prod *= x;
    }
    return prod;
}
int main(){
    char postfix[30];
    printf("Enter your Expression : ");
    scanf("%s",postfix);
    int i=0;
    while(postfix[i] != '\0'){
        if(postfix[i] == '^'){
            int operand2 = pop();
            int operand1 = pop();
            int result = powr(operand1 , operand2);
            push(result);
            i++;
        }
        else if(postfix[i] == '*'){
            int operand2 = pop();
            int operand1 = pop();
            int result = operand1 * operand2;
            push(result);
            i++;
        }
        else if(postfix[i] == '/'){
            int operand2 = pop();
            int operand1 = pop();
            int result = operand1 / operand2;
            push(result);
            i++;
        }
        else if(postfix[i] == '+'){
            int operand2 = pop();
            int operand1 = pop();
            int result = operand1 + operand2;
            push(result);
            i++;
        }
        else if(postfix[i] == '-'){
            int operand2 = pop();
            int operand1 = pop();
            int result = operand1 - operand2;
            push(result);
            i++;
        }
        else{
            int value = postfix[i] - '0';
            push(value);
            i++;
        }
    }
    int result = pop();
    printf("%d",result);
    return 0;
}