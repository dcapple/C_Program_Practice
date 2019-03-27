#include <stdio.h>
#include <stdlib.h>


void trans(int,int,int *);

int main(void){

int bit[10]={0};
int num=456;

trans(num,8,bit);
for(int i=9;i>=0;i--)
    printf("%d",bit[i]);
printf("\n");

return 0;
}

//利用%取於數進位轉換

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
