#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    cout<<"Printing the array"<<endl;
    //print the array
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Printing done"<<endl;
}
int main()
{
    int third[15]={2,7};
    int n=15;
    printArray(third, 15);

    int fourth[15]={9,2};
    n=15;
    int fourthsize=sizeof(fourth)/sizeof(int);
    cout<<"Size of fourth is:"<<" "<<fourthsize <<endl;
    return 0;
}