You are given an integer array height of length n. There are n vertical lines drawn such that
the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that
the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.

int max(int a, int b);
int min(int a, int b);
int maxArea(int* height, int heightSize){
    int area = 0;
    int low = 0;
    int high = heightSize - 1;
    while(low < high) {
        area = max(area, (high - low)*(min(height[low],height[high])));
        if(height[low] < height[high])
            low++;
        else
            high--;
    }
    return area;
}
int max(int a, int b){
    if(a <= b)
        return b;
    else
        return a;
}
int min(int a, int b){
    if(a <= b)
        return a;
    else
        return b;
}
