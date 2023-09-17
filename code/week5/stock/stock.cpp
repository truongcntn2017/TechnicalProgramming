#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    vector<int> minCurrent;
    int maxProfit = 0;
        
    if (prices.size()){
        minCurrent.push_back(prices[0]);
            
        for (int i=1;i<prices.size();++i)
            minCurrent.push_back(min(minCurrent[i-1], prices[i]));
            
        for (int i=1;i<prices.size();++i)
            maxProfit = max(maxProfit, prices[i] - minCurrent[i-1]);
    }
        
    return maxProfit;
}

int main(){

    int n;
    vector<int> nums;

    cin >> n;
    nums.resize(n);

    for (int i=0; i<n; i++){
        cin >> nums[i];
    }

    cout << maxProfit(nums);

    return 0;
}