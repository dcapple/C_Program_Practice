#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void int2str(int ,char *);

int main(void){
char s[20];
//�M�Ŧr��
memset(s,' ',20);

int A=123456;

int2str(A,s);
printf("%s",s);

return 0;
}
//�m�߾����r��

void int2str(int num,char *string){
sprintf(string,"%d",num);
}
