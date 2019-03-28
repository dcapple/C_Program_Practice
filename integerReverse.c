int reverse( int x) {
    
    int rem,sum=0;

        while(x!=0){
        rem=x%10;
        x/=10;
         //最主要判斷數值相加後會不會溢位
        if (sum > INT_MAX/10 || (sum == INT_MAX / 10 && rem>7)) 
            return 0;
        if (sum < INT_MIN/10 || (sum == INT_MIN / 10 && rem<-8)) 
            return 0;
        
        sum=sum*10+rem;
            
        }
    return sum;
}
