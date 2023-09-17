#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr;

void moveUp(vector<int> nums, int& left){
    int value = nums[left++];

    while (left < nums.size() && nums[left] == value){
        left++;
    }
}
void moveDown(vector<int> nums, int& right){
    int value = nums[right--];

    while (right >=0 && nums[right] == value){
        right--;
    }
}

void threeSum(vector<int>& nums) {    
    unordered_set<int> used;

    if (!nums.empty()){
        sort(nums.begin(),nums.end());
    
        for (int i=0; i<nums.size()-1;++i){
            if (!used.count(nums[i])){
                
                int left = i + 1;
                int right = nums.size() - 1;
                int k = -nums[i];
            
                while (left < right){
                    if (nums[left] + nums[right] < k){
                        left++;
                    }
                    else if (nums[left] + nums[right] > k){
                        right--;
                    }
                    else{
                        cout<<nums[i]<<" "<<nums[left]<<" "<<nums[right]<<endl;
                        moveUp(nums, left);
                        moveDown(nums, right);
                    }
                }
                
                used.insert(nums[i]);
            }
        }
    }
    
}

int main(){

    cin >> n;

    arr.resize(n);
    
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    threeSum(arr);
    
    return 0;
}