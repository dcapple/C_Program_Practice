#include <stdio.h>
#include <stdlib.h>
int main(void){

int count=0,x=456;
//x=x&(x-1)實際上就是把低位bit的1消除，用來計算有多少1
while(x){
    count++;
    x=x&(x-1);
}

printf("count=%d",count);


return 0;
}