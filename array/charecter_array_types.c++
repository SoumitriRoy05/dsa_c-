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
    char ch[5]={'a','b','c','d','e'};
    cout<<ch[3]<<endl;      //output-->d
    cout<<"Printing the array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<ch[i]<<" ";
    }

    return 0;
}