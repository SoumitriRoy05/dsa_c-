#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<<"Enter the value for a:"<<" "<<a<<endl;
    if(a>0)
    {
        cout<<"A is a positive number"<<endl;
    }
    else if(a<0)
    {
        cout<<"A is a negative number"<<endl;
    }
    else
    {
        cout<<"A is 0"<<endl;
    }
}