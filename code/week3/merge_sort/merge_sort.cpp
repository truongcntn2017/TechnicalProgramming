#include <bits/stdc++.h>

using namespace std;

void mergeHelper(vector<int> &arr, int left, int mid, int right, vector<int> &temp){
    int i = left;
    int j = mid+1;
    int k = left;

    while (i <= mid || j <= right){
        if (i <= mid && (j == right+1 || arr[i] < arr[j])){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    for (int i=left; i<=right; i++){
        arr[i] = temp[i];
    }

}
void mergeSortHelper(vector<int> &arr, int left, int right, vector<int> &temp){
    if (left>=right)
        return;

    int mid = (left+right)/2;

    mergeSortHelper(arr, left, mid, temp);
    mergeSortHelper(arr, mid+1, right, temp);
    mergeHelper(arr, left, mid, right, temp);

}

void mergeSort(vector<int> &arr){
    vector<int> temp;
    temp.resize(arr.size());

    mergeSortHelper(arr, 0, arr.size()-1, temp);
}

void printArr(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> arr = {4, 5, 1, 2, 4, 3, 1, 10, -10};

    mergeSort(arr);
    printArr(arr);

    return 0;
}