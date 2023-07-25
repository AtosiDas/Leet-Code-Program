Given an integer array nums of size n, return the number with the value closest to 0 in nums.
If there are multiple answers, return the number with the largest value.
**
 * @param {number[]} nums
 * @return {number}
 */
var findClosestNumber = function(nums) {
    var min = Math.abs(nums[0]);
    var count = 0;
    for(var i = 1; i < nums.length; i++){
        if(Math.abs(nums[i]) < min){
            min = Math.abs(nums[i]);
            count = i;
        }
        if(Math.abs(nums[i]) == min){
            if(nums[count]<nums[i]){
                min = Math.abs(nums[i]);
                count = i;
            }
        }
    }
    return nums[count];
}
