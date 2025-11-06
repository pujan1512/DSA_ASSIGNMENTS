#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >=0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
void printArr(int arr[], int n){
    for(int i = 0; i<n ; i++){
        cout << arr[i];
    }
    cout << endl;
}
int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "original array: ";
    printArr(arr, n);
    insertionSort(arr, n);
    cout << "sorted array: ";
    printArr(arr, n);
    return 0;
}