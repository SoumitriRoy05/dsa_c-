#include<iostream>
using namespace std;
void array(int arr[], int size)
{
    cout<<"Printing the array:"<<endl;
    for(int i=0;i<size;i++)
    {
     cout<<arr[i]<<endl;
    }
    cout<<"Printing done"<<endl;
}
int main()
{
    
    float s[5]={1.2 ,1.4 ,2.4 ,3.5 ,4.6};
    cout<<s[2]<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}