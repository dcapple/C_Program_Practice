#include <stdio.h>
#include <stdlib.h>
#define bit3 (0x1<<3)

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
