void duplicatechar(char *s){
int i,j,len=strlen(s),count=0;

for(i=0;i<len;i++){
   for(j=0;j<len;j++){
	if(s[i]==s[j])
		//計算重複次數
		count++;     
	if(count>1)
		printf("%c : %d \n",s[i],count);
	}
	count=0;
}
}