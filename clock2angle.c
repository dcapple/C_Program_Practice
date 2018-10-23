#include <stdio.h>
#include <stdlib.h>

int clock(int ,int);

int main(void){

int hour,min,angle;
scanf("%d  %d",&hour,&min);

angle=clock(hour,min);

printf("%d \n",angle);

return 0;
}

//輸入幾點幾分，回傳時針分針角度
int clock(int hour,int min){
int angle;
float hourd,mind;
if(hour>12)
    hour=hour-12;

hourd=(hour/12.0)*360;

mind=(min/60.0)*360;

angle=(hourd>mind)?(hourd-mind):(mind-hourd);

if(angle>180)
    angle=angle-180;

return angle;
}