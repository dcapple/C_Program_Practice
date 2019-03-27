int* twoSum(int* nums, int numsSize, int target) {
    
int i,j;
    
int *answer=(int *)malloc(2*sizeof(int));
    
for(i=0;i<(numsSize-1);i++)
    
    for(j=i+1;j<numsSize;j++){
        
        if((nums[i]+nums[j])==target){
            answer[0]=i;
            answer[1]=j;
        }
    }
    return answer;
}