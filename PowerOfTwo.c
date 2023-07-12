Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2^x.

bool isPowerOfTwo(int n){
    int rem;
    if(n <= 0)
        return false;
    if(n == 1 || n == 2){
        return true;
    if(n > 2){
        while(n != 1){
            rem = n % 2;
            if(rem != 0)
                return false;
            n = n / 2;
        }
    }
    return true;
}
