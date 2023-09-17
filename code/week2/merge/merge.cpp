#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> arr1;
vector<int> arr2;
vector<int> res;

vector<int> merge(vector<int> arr1, vector<int> arr2){
    int index1=0;
    int index2=0;
    vector<int> res;

    while (index1 < arr1.size() || index2 < arr2.size()){
        if (index1 < arr1.size() && (index2 == arr2.size() || arr1[index1] < arr2[index2])){
            res.push_back(arr1[index1++]);
        }
        else{
            res.push_back(arr2[index2++]);
        }
    }

    return res;
}
int main(){

    cin >> n;
    arr1.resize(n);

    for (int i=0; i<n; i++){
        cin >> arr1[i];
    }

    cin >> m;
    arr2.resize(m);
    for (int i=0; i<m; i++){
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    res = merge(arr1, arr2);

    for (int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }

    return 0;
}