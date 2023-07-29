You are given a 0-indexed integer array nums and an integer k. Your task is to perform the following
operation exactly k times in order to maximize your score:

Select an element m from nums.
Remove the selected element m from the array.
Add a new element with a value of m + 1 to the array.
Increase your score by m.
Return the maximum score you can achieve after performing the operation exactly k times.

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maximizeSum = function(nums, k) {
    var score = 0;
    var max = nums[0];
    var count = 0;
    for(var j = 0; j < k; j++){
        max = nums[0];
        for(var i = 1; i < nums.length; i++){
            if(max < nums[i]){
                max = nums[i];
                count = i;
            }
        }
        score += max;
        nums[count] = max + 1;
        count = 0;
    }
    return score;
};
