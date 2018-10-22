#include <stdio.h>
#include <stdlib.h>
int main(void){

struct data{
int num;
char name[10];
};
struct data s1={14,"larry"};


printf("%d \n",s1.num);
printf("%s \n",s1.name);

return 0;
}