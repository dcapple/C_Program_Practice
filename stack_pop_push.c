#include <stdio.h>
#include <stdlib.h>

#define Max_size 10

void push(int);
void pop(void);
void showstack();

int stack[Max_size],top=0;

int main(void){
push(0);
push(1);
push(2);
showstack();
pop();
pop();
pop();



system("pause");
return 0;
}

void push(int data){
if(top==Max_size)
    printf("this stack is full\n");
else
    stack[top++]=data;
}

void pop(){
if(top == 0)
    printf("this stack is empty \n");
else
    printf("%d\n",stack[--top]);
}

void showstack(){
if(top==0)
    printf("this stack is empty \n");
else
    for(int i=(top-1);i>=0;i--)
        printf(" %d \n",stack[i]);

}
