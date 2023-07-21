Given an integer array nums, move all 0's to the end of it while maintaining the relative order
of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

void moveZeroes(int* nums, int numsSize){
    int swap;
    for(int i = 0;i < numsSize; i++){
        if(nums[i] == 0){
            for(int j = i+1; j < numsSize; j++){
                if(nums[j] != 0){
                    swap = nums[i];
                    nums[i] = nums[j];
                    nums[j] = swap;
                    break;
                }
            }
        }
    }
    return nums;
}
