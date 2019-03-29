#include <stdio.h>
#include <stdlib.h>


void main(){
int i,j,a[1024],N=99;

//初始化陣列內容
memset(a,0,sizeof(a));

a[0]=1;
for(i=2;i<=N;i++){
    for(j=0;j<sizeof(a)/sizeof(a[0]);j++)
        a[j]*=i;
    //數字進位
    for(j=0;j<sizeof(a)/sizeof(a[0]);j++){
        a[j+1]+=a[j]/10;
        a[j]%=10;
    }
}

//執行到有數值開始
for(i=sizeof(a)/sizeof(a[0])-1;i>=0;i--)
    if(a[i]!=0)
        break;

for(;i>=0;i--)
    printf("%d \n",a[i]);


return;

}
