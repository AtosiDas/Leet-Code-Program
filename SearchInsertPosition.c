Given a sorted array of distinct integers and a target value, return the index if the target is found.
If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

int searchInsert(int* nums, int numsSize, int target){
    int low = 0;
    int high = numsSize - 1;
    int mid;
    while(low <= high) {
        mid = (low + high)/2;
        if(target < nums[mid]){
            high = mid - 1;
        }
        else if(target == nums[mid]){
            return mid;
            break;
        }
        else {
            low = mid + 1;
        }
    }
    return (high + 1);
}
