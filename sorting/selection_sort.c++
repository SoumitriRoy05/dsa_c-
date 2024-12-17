#include <iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &arr, int n) {
    for (int i = 0; i <n-1; i++) {       
        int minIndex=i; 
        for (int j = i+1; j < n  ; j++) { 
            if (arr[j] < arr[minIndex]) {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
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
    selectionSort(arr, n);
    cout << "Sorted array: ";
    displayArray(arr);
    return 0;
}
