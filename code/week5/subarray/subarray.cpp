#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int result = INT_MIN;
    vector<int> maxSum(nums.size() + 1);
        
    if (!nums.empty()){
        maxSum[0] = nums[0];
            
        for (int i=1; i<nums.size(); i++){
            maxSum[i] = max(nums[i], maxSum[i-1]+ nums[i]);
        }
            
        for (int i=0; i<nums.size(); i++){
            result = max(result, maxSum[i]);
        }
            
    }
        
    return result;
}

int main(){

    int n;
    vector<int> nums;

    cin >> n;
    nums.resize(n);

    for (int i=0; i<n; i++){
        cin >> nums[i];
    }

    cout << maxSubArray(nums);

    return 0;
}