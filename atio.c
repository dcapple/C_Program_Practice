int atoii(const char *s){
int num=0;
char *c=s;

while(*c!='\0'){
    num*=10;
    //將數字char轉換成整數形
    num+=*c-'0';
    c++;
}

return num;
}
