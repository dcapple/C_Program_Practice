#include <stdio.h>
#include <stdlib.h>
#define bit3 (0x1<<3)
void trans(int num,int form,int *bit);
void show(int *);


//利用define寫出簡單的函式對位元操作並確認
int main(void){

int a=0,bit[10]={0};

a|=bit3;

printf("%d \n",a);

trans(a,2,bit);

show(bit);

return 0;
}


void show(int *bit){


for(int i=9;i>=0;i--)
    printf("%d",*(bit+i));


}

void trans(int num,int form,int *bit){

int i=0;
switch(form){
case 2 :

  while( num>=2){
    *(bit+i)=num%2;
    num=num/2;
    i++;
  }
  *(bit+i)=num;
  break;

case 8:

  while( num>=8){
    *(bit+i)=num%8;
    num=num/8;
    i++;
  }
  *(bit+i)=num;
  break;

  case 10:

  while( num>=10){
    *(bit+i)=num%10;
    num=num/10;
    i++;
  }
  *(bit+i)=num;
  break;

case 16:

  while( num>=16){
    *(bit+i)=num%16;
    num=num/16;
    i++;
  }
  *(bit+i)=num;
  break;

default:
    printf("failed\n");
}

}