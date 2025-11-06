#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int smallestIndex = i;
        for(int j= i+1; j<n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallestIndex];
        arr[smallestIndex] = temp;
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
    selectionSort(arr, n);
    cout << "sorted array: ";
    printArr(arr, n);
    return 0;
}