int* twoSum(int* nums, int numsSize, int target) {
    
int i,j;

//用動態記憶體配置，直接給予一段記憶體位置才有辦法傳副函式外
int *answer=(int *)malloc(2*sizeof(int));

//簡易的檢查邏輯
for(i=0;i<(numsSize-1);i++)
    
    for(j=i+1;j<numsSize;j++){
        
        if((nums[i]+nums[j])==target){
            answer[0]=i;
            answer[1]=j;
        }
    }
    return answer;
}
