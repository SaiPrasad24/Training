

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    static int indices[2];
    //int x=nums[0];
    //int indices = nums[0];
    for(int i=0;i<sizeof(nums);i++){
        for(int j=1;j<sizeof(nums);j++){      
        
        if(nums[j]==(target-nums[i]))
            indices[0] = nums[i];
            indices[1] = nums[j];
        }
    
    }
    return indices;
}
