#include <stdio.h>
#include <stdlib.h>
int main(void){

int count=0,x=456;

while(x){
    count++;
    x=x&(x-1);
}

printf("count=%d",count);


return 0;
}