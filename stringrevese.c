void stringrev(char *s){
int len=strlen(s),i,j;


//���ϥΦh�l���O����Ŷ����洫
for(i=0,j=len-1;i<j;i++,j--){
s[i]=s[i]^s[j];
s[j]=s[i]^s[j];
s[i]=s[i]^s[j];
}

}