bool isPalindrome(int x) {
    
    int i,j,temp=x;
    
    int count=0;
    //基本判斷
    if(temp<0)
        return false;
    else if(temp<10)
        return true;
    //計算輸入的整數有幾位數
    while(temp!=0){
        temp/=10;
        count++;
    }
    //將每位數輸入進陣列中
    int bit[count];
    temp=x;
    for(i=(count-1);i>-1;i--){
        temp=x%10;
        x/=10;
        bit[i]=temp;
    }
    //檢查是否迴文
    for(i=(count-1),j=0;j<i;j++,i--){
        if(bit[i]!=bit[j])
            return false;
    }
        return true;
    
}
