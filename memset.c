#include <stdio.h>
#include <stdlib.h>
void *memset(void *s,char c,unsigned int num);

int main()
{
    char a[]="Larry";

    memset(a,'c',3);

    printf(a);

    return 0;
}

void *memset(void *s,char c,unsigned int num){
unsigned int i;
char *str=s;
//用c替代掉s中的內容
while(num){
    *str=c;
    str++;
    num--;
}

return s;
}
