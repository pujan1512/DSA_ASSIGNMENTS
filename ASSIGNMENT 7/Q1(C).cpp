#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i= 0; i<n-1; i++){
        bool isSwap = false;
        for(int j= 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
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
    bubbleSort(arr, n);
    cout << "sorted array: ";
    printArr(arr, n);
    return 0;
}