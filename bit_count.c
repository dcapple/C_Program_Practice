#include <stdio.h>
#include <stdlib.h>
int main(void){

int count=0,x=456;
//x=x&(x-1)��ڤW�N�O��C��bit��1�����A�Ψӭp�⦳�h��1
while(x){
    count++;
    x=x&(x-1);
}

printf("count=%d",count);


return 0;
}