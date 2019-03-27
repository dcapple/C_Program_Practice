#include <stdio.h>
#include <stdlib.h>


int isprime(int );

int main()
{
if(isprime(18))
    printf("is prime");
else
    printf("not prime");

return 0;
}

int isprime(int num){
if (num==1)
    return 0;

//只考慮一半的因數
for(int i=2;i*i<num;i++){       
    if(num%i==0)
    return 0;
}
    return 1;

}
