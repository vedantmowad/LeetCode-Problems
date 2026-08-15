#include<iostream>
#include<vector>
using namespace std;
int water_trapped(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int left_max = 0, right_max = 0;
    int water = 0;
    while (left < right) {
        if (height[left] <= height[right]){
            if (height[left] >= left_max) {
                left_max = height[left];
            } else {
                water += left_max - height[left];
            }
            left++;
        } else {
            if (height[right] >= right_max) {
                right_max = height[right];
            } else {
                water += right_max - height[right];
            }
            right--;
        }
    }
    return water;
}
int main(){
    vector<int> nums = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<water_trapped(nums)<<endl;
    return 0;
}
