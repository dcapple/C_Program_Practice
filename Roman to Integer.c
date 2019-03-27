int romanToInt(char* s) {
    int i=0,sum=0,len=strlen(s);
    
    int roam[128]={NULL};
    roam['I']=1;
    roam['V']=5;
    roam['X']=10;
    roam['L']=50;
    roam['C']=100;
    roam['D']=500;
    roam['M']=1000;
    
    
    while(i<len){
       if(i+1<len && roam[s[i]]<roam[s[i+1]]){
           sum+=roam[s[i+1]]-roam[s[i]];
            i++;
       }else
           sum+=roam[s[i]];
    i++;
    }

    return sum;
}