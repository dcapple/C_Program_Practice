#include <stdio.h>
#include <stdlib.h>
#define SETBIT(A,B) ((A)|=(1<<B))
#define CLRBIT(A,B) ((A)&=~(1<<B))


//�Q��define�g�X²�檺�禡��줸�ާ@�ýT�{
int main(void){

int a=0;

//�]�wbit

SETBIT(a,4);

printf("%d \n",a);

a=7;

//����bit
CLRBIT(a,2);

printf("%d \n",a);


return 0;
}
