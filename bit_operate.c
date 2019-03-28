#include <stdio.h>
#include <stdlib.h>
#define SETBIT(A,B) ((A)|=(1<<B))
#define CLRBIT(A,B) ((A)&=~(1<<B))


//利用define寫出簡單的函式對位元操作並確認
int main(void){

int a=0;

//設定bit

SETBIT(a,4);

printf("%d \n",a);

a=7;

//消除bit
CLRBIT(a,2);

printf("%d \n",a);


return 0;
}
