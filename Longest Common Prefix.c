char* longestCommonPrefix(char** strs, int strsSize) {
    if(!strsSize)
        return "";
    
    int i=0,j,k=0,minlen,flag=0;

    minlen=strlen(strs[0]);

    char *temp=(char *)malloc((minlen+1)*sizeof(char));
    i=0;
    
    //搜尋重複的最長段落
    while(i<minlen){
        for(j=0;j<strsSize;j++){
             if(strs[flag][i] != strs[j][i]){
                temp[i] = '\0';
                return temp;
             }
        }
        temp[i] = strs[flag][i];
        i++;
    }
    temp[i] = '\0';
    return temp;
}
