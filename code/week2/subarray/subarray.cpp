#include <bits/stdc++.h>

using namespace std;

int n;
long long k;
vector<int> arr;
long long currentSum = 0;

int main(){

    cin >> n;
    arr.resize(n);
    for (int i = 0; i<n; i++)
        cin >> arr[i];

    cin >> k;
    int right = 0;
    int left = 0;

    while (right < n){
        while (currentSum < k and right < n){
            currentSum += arr[right];
            right++;
        }
        while (currentSum >= k and left < n){
            if (currentSum == k){
                // cout <<"Found at from "<<left<<" to "<<right-1<<endl;
            }
            currentSum -= arr[left];
            left++;
        }

    }

    return 0;
}