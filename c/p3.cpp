//program return an array which contains product of all elements in a given array except the element at that index
// eg : [1,2,3,4] -> [24,12,8,6]

#include<iostream>
#include<vector>
using namespace std;

#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans(nums.size(), 1);
    int left = 1, right = 1;
    
    for(int i = 0; i < nums.size(); i++) {
        ans[i] *= left;
        left *= nums[i];
    }
    
    for(int i = nums.size() - 1; i >= 0; i--) {
        ans[i] *= right;
        right *= nums[i];
    }
    
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);
    
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}
