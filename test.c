#include <stdio.h>
#include <stdlib.h>
#define bit3 (0x1 << 3)
#define MAX(A,B) (A>=B)?A:B
typedef unsigned long DWORD;
DWORD fun(DWORD num);
int isprime(int num);
int strcp(char a[],char b[]);
void int2str(int ,char *);
void trans(int,int,int *);
int clock(int ,int);

int main()
{
//    char x[]="abcd",y[]="abc",a='a',b='A';//    int max,min,arg,a[10]={5,9,2,4,7,8,3,12,30,1};
//    max=a[0];
//    min=a[0];
//    arg=0;
//    for(int i=0;i<10;i++){
//        if(max<a[i])
//            max=a[i];
//        if(min>a[i])
//            min=a[i];
//        arg+=a[i];
//    }
//    printf("max=%d min=%d arg=%d",max,min,arg/10);
//
//return 0;

//int count=0,x=6,a=7;
//while(x){
//    count++;
//    a=a&(a-1);
//    x=x&(x-1);
//}
//printf("count=%d",count);

//DWORD a=0;
//
//printf("%ld",fun(12345678));
//printf("%d \n",(a<b)? -1:1);

//struct data{
//int num;
//char name[10];
//};
//struct data s1={14,"larry"};
//
//
//printf("%d \n",s1.num);
//printf("%s \n",s1.name);

//printf("%d",MAX(3,4));

//int A=1234;
//char s[4];
//
//int2str(A,s);
//
//printf("%s",s);

//int bit[10]={0};
//int num=456;
//trans(num,8,bit);
//for(int i=9;i>=0;i--)
//    printf("%d",bit[i]);
//printf("\n");


int a,b,angle;
//scanf("%d  %d",&a,&b);

angle=clock(9,0);

printf("%d \n",angle);

return 0;
}

int clock(int hour,int min){
int angle;
float hourd,mind;
if(hour>12)
    hour=hour-12;

hourd=(hour/12.0)*360;

mind=(min/60.0)*360;

angle=(hourd>mind)?(hourd-mind):(mind-hourd);

if(angle>180)
    angle=angle-180;

return angle;
}


void trans(int num,int form,int *bit){

int i=0;
switch(form){
case 2 :

  while( num>2){
    *(bit+i)=num%2;
    num=num/2;
    i++;
  }
  *(bit+i)=num;
  break;

case 8:

  while( num>8){
    *(bit+i)=num%8;
    num=num/8;
    i++;
  }
  *(bit+i)=num;
  break;

  case 10:

  while( num>10){
    *(bit+i)=num%10;
    num=num/10;
    i++;
  }
  *(bit+i)=num;
  break;

case 16:

  while( num>16){
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




void int2str(int num,char *string){
sprintf(string,"%d",num);
}

int strcp(char a[],char b[]){
int i=0;
while(a[i]==b[i]){
    if(a[i]=='\0')
        return 0;
    i++;
    }
return (a[i]<b[i])? -1:1;
}

DWORD fun(DWORD num)
{
    DWORD h, l;
    h = num << 16;
    l = num >> 16;
    printf("%d \n",h);
    printf("%d \n",l);
    return h ^ l;
}
int isprime(int num){
if (num==1)
    return 0;
for(int i=2;i<=num;i++){
    if(num%i==0)
    return 0;
}
    return 1;

}
