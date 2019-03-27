#include <stdio.h>
#include <stdlib.h>

//利用#define寫簡單的函式

#define MAX(A,B) (A>=B)?A:B

int main(void){

printf("%d",MAX(3,4));

return 0;

}
