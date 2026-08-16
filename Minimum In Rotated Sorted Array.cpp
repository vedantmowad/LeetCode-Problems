#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int minimum_of(vector<int>& nums) {
    int st = 0, end = nums.size() - 1;
    while (st < end) {
        int mid = st + (end - st) / 2;
        if (nums[mid] > nums[end]) {
            st = mid + 1;
        } else {
            end = mid;
        }
    }
    return nums[st];
}
int main(){
    vector<int> nums = {4,5,6,7,8,9,1,2,3};
    cout<<minimum_of(nums)<<endl;
    return 0;
}