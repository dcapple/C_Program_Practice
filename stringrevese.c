void stringrev(char *s){
int len=strlen(s),i,j;


//不使用多餘的記憶體空間做交換
for(i=0,j=len-1;i<j;i++,j--){
s[i]=s[i]^s[j];
s[j]=s[i]^s[j];
s[i]=s[i]^s[j];
}

}