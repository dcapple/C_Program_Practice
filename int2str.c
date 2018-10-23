#include <stdio.h>
#include <stdlib.h>

void int2str(int ,char *);

int main(void){

int2str(A,s);
printf("%s",s);

return 0;
}
//½m²ß¾ã¼ÆÂà¦r¦ê

void int2str(int num,char *string){
sprintf(string,"%d",num);
}