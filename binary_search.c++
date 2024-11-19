#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        //go to right part
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       mid=start+(end-start)/2;
      
    }
    return -1;  
}
int main()
{
    int even[6]={3,5,66,72,36,30};
    int odd[5]={41,33,16,7,9};
    int index=binarySearch(even,6,66);
    cout<<"Index of 66 is:"<<index<<endl;
    return 0;
}