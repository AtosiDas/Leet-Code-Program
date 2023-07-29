Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    var output = [];
    output.push(nums[0]);
    for(var i = 1; i < nums.length; i++){
        output.push(nums[i] + output[i-1]);
    }
    return output;
};
