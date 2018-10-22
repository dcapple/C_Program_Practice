#include <stdio.h>
#include <stdlib.h>
typedef unsigned long DWORD;
DWORD fun(DWORD num);

int main(void){

DWORD a=0;

printf("%ld",fun(12345678));

return 0;
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