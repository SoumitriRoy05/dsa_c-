#include <iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &arr, int n) {
    for (int i = 1; i <= n; i++) {  
        int temp=arr[i];
        int j=i-1;      
        for (; j>=0 ; j--) { 
            if (arr[j] > temp) {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void displayArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    cout << "Sorted array: ";
    displayArray(arr);
    return 0;
}
