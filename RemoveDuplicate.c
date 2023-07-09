int removeDuplicates(int* nums, int numsSize){
  int expectedNums[numsSize];
    
  int count = 1;
  int j = 0;
  for(int i = 0;i < numsSize - 1; i++) {
          if(nums[i] != nums[i + 1]){
               expectedNums[j++] = nums[i];
               count++;
          }
  }
  expectedNums[j++] = nums[numsSize - 1];
  for(int i = 0;i < j; i++){
        nums[i] = expectedNums[i];
  }
  return count;
}
