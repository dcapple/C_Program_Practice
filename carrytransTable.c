#include <stdio.h>
#include <stdlib.h>
#define  carry 8

int main()
{
    //�]�w�n�e�{���Ʀr
    char table[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int num,d,bit[100],len=0,i;
    num=99;
    //�D�l�ƨé�i�}�C��
    while(num>=carry){
        bit[len]=num%carry;
        num/=carry;
        len++;
    }
    bit[len]=num%carry;
    //�L�X���G
    for(i=len;i>-1;i--)
        printf("%c ",table[bit[i]]);
    printf("\n");

    return 0;
}
