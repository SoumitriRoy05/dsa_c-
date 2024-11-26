#include<iostream>
using namespace std;
void update(int arr[], int n)
    {
        cout<<"INSIDE THE FUNCTION"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"GOING BACK TO MAIN FUNCTION"<<" ";
    }
    int main()
    {
        int arr[5]={3,4,5,6,7};
        update(arr,5);
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }