#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
  int first = -1, last = -1;
  int st = 0, end = nums.size() - 1;
  while (st <= end) {
     int mid = st + (end - st) / 2;
     if (nums[mid] == target) {
         first = mid;
         end = mid - 1;
     } else if (nums[mid] > target) {
        end = mid - 1;
     } else {
         st = mid + 1;
     }
  }
  st = 0, end = nums.size() - 1;
  while (st <= end) {
      int mid = st + (end - st) / 2;
      if (nums[mid] == target) {
            last = mid;
            st = mid + 1;
         } else if (nums[mid] > target) {
            end = mid - 1;
         } else {
            st = mid + 1;
         }
  }
  return {first, last};
}
int main(){
  vector<int>nums = {1,2,3,4,5,6,6,7,8,9};
  int target = 8;
  vector<int> ans = searchRange(nums, target);
  cout<<"first Position : "<<ans[0]<<endl;
  cout<<"last Position : "<<ans[1]<<endl;
  return 0;
}
