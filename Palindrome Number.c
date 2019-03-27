bool isPalindrome(int x) {
    

    int i,j,temp=x;
    
    int count=0;
    
    if(temp<0)
        return false;
    else if(temp<10)
        return true;
    
    while(temp!=0){
        temp/=10;
        count++;
    }
    
    int bit[count];
    temp=x;
    for(i=(count-1);i>-1;i--){
        temp=x%10;
        x/=10;
        bit[i]=temp;
    }
    
    for(i=(count-1),j=0;j<i;j++,i--){
        if(bit[i]!=bit[j])
            return false;
    }
        return true;
    
}