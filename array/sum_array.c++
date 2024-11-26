#include<iostream>
using namespace std;
int getSum(int arr[], int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
    int main()
    {
        int arr[5]={3,4,5,6,7};
        int size;
        cout<<"ENTER SIZE:"<<endl;
        cin>>size;
        // if(size>100)
        // {
        //     cout<<"Error!"<<endl;
        //     return 1;
        // }
        int num[100];
        cout<<size<<" ";
        for(int i=0;i<arr[5];i++)
        {
            cin>>num[i];
        }
        int totalSum=getSum(num,size);
        
        cout<<"Sum of all the elements:"<<totalSum<<endl;
        return 0;
    }