int atoii(const char *s){
int num=0;
char *c=s;

while(*c!='\0'){
    num*=10;
    //�N�Ʀrchar�ഫ����Ƨ�
    num+=*c-'0';
    c++;
}

return num;
}