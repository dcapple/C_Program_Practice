#include <stdio.h>
#include <stdlib.h>
#define  carry 8

int main()
{
    //設定要呈現的數字
    char table[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int num,d,bit[100],len=0,i;
    num=99;
    //求餘數並放進陣列中
    while(num>=carry){
        bit[len]=num%carry;
        num/=carry;
        len++;
    }
    bit[len]=num%carry;
    //印出結果
    for(i=len;i>-1;i--)
        printf("%c ",table[bit[i]]);
    printf("\n");

    return 0;
}
