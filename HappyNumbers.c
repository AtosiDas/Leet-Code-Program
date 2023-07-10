Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

bool isHappy(int n){
    while(1){
        long int sum = 0;
        int rem = 0;
        while(n != 0){
            rem = n % 10;
            sum = sum + (rem*rem);
            n = n / 10;
        }
        n = sum;
        if(sum == 1)
            return true;
        if(sum == 4)
            return false;
    }
    return false;
}
