#include <stdio.h>
#include <stdlib.h>
#define SETBIT(A,B) ((A)|=(1<<B))
#define CLRBIT(A,B) ((A)&=~(1<<B))
<<<<<<< HEAD
=======

>>>>>>> 2251abf3cbad2d54aa2f4d8d16259270fb5edbae

//利用define寫出簡單的函式對位元操作並確認
int main(void){

int a=0;

<<<<<<< HEAD
//�]�wbit
=======
//設定bit
>>>>>>> 2251abf3cbad2d54aa2f4d8d16259270fb5edbae

SETBIT(a,4);

printf("%d \n",a);

a=7;

<<<<<<< HEAD
//����bit
=======
//消除bit
>>>>>>> 2251abf3cbad2d54aa2f4d8d16259270fb5edbae
CLRBIT(a,2);

printf("%d \n",a);


return 0;
}
