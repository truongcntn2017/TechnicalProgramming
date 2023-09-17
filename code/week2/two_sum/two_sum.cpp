#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
long long k;
vector<int> arr;

int main(){

    cin >> n;
    arr.resize(n);
    for (int i = 0; i<n; i++)
        cin >> arr[i];

    cin >> k;

    sort(arr.begin(), arr.end());

    int left, right;
    left = 0;
    right = arr.size() - 1;

    while (left <= right){
        long long sum_pair = arr[left] + arr[right];
        if (sum_pair == k){
            cout << arr[left] <<" "<<arr[right]<<endl;
            break;
        }
        else if (sum_pair < k){
            left++;
        }
        else{
            right--;
        }
    }


    return 0;
}