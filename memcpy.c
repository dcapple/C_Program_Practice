#include <stdio.h>
#include <stdlib.h>
void *memcpy(void *,const char *,unsigned int num);

int main()
{
    char a[]="Larry";
    const char c[]="good";
    memcpy(a,c,4);
    printf(a);

    return 0;
}


void *memcpy(void *dst,const char *str,unsigned int num){
unsigned int i;
char *ds=dst;
char *st=str;
//�N���w�����e�ƻs��ؼЦ�}
for(i=0;i<num;i++)
    *(ds+i)=*(st+i);


return dst;
}
