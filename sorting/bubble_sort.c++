#include <iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr, int n) {
    for (int i = 1; i <= n; i++) {        
        for (int j = 0; j < n - i ; j++) { 
            if (arr[j] > arr[j + 1]) {
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    displayArray(arr);
    return 0;
}
