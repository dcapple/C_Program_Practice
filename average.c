#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max,min,arg,a[10]={5,9,2,4,7,8,3,12,30,1};
    max=a[0];
    min=a[0];
    arg=0;
    //一個矩陣搜尋最大值、最小值、平均
    for(int i=0;i<10;i++){
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        arg+=a[i];
    }
    printf("max=%d min=%d arg=%d",max,min,arg/10);

return 0;

}