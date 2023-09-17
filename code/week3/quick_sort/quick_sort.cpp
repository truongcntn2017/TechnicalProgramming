#include <bits/stdc++.h>

using namespace std;


void quickSortHelper(vector<int> &arr, int left, int right){
    if (left >= right)
        return;

    int pivot = arr[(left + right)/2];
    int i = left;
    int j = right;
    while (i<=j){
        while (arr[i]<pivot)
            i++;
        while (arr[j]>pivot)
            j--;

        if (i<=j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    quickSortHelper(arr, left, j);
    quickSortHelper(arr, i, right);
}

void quickSort(vector<int>& arr){
    quickSortHelper(arr, 0, arr.size()-1);
}

void printArr(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> arr = {4, 5, 1, 2, 4, 3, 1, 10, -10};

    quickSort(arr);
    printArr(arr);

    return 0;
}