Given an unsorted array of integers nums, return the length of the longest continuous increasing
subsequence (i.e. subarray). The subsequence must be strictly increasing.

A continuous increasing subsequence is defined by two indices l and r (l < r) such that
it is [nums[l], nums[l + 1], ..., nums[r - 1], nums[r]] and
for each l <= i < r, nums[i] < nums[i + 1].

/**
 * @param {number[]} nums
 * @return {number}
 */

function maximum(num1,num2){
    if(num1 < num2){
        return num2;
    }
    else{
        return num1;
    }
}

var findLengthOfLCIS = function(nums) {
    var count = 1;
    var max = 0;
    for(var i = 0; i < nums.length; i++){
        for(var j = i; j < nums.length; j++){
            if(nums[j] < nums[j+1]){
                count++;
            }else{
                break;
            }
        }
        max = maximum(max,count);
        count = 1;
    }
    return max;
};
