#include <bits/stdc++.h>

using namespace std;

long long binarySearch(long long n){
    long long left = 0;
    long long right = n;
    long long mid, res;

    while (left<=right){
        mid = (left+right)/2;

        if (mid*mid<=n){
            res = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }

    return res;
}

int main(){
    long long n;
    cin >> n;

    cout << binarySearch(n);
    return 0;
}