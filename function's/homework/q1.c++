#include<iostream>
using namespace std;
void fibonacci(int n)
{
    int a=0,b=1, next_num;
    cout<<"FIBONACCI SERIES:"<<" ";
    for(int i=0;i<=n;i++)
    {
        cout<<a<<" ";
        next_num=a+b;
        a=b;
        b=next_num;
    }
    cout<<endl;
}
int main()
{
     int n;
     cin>>n;
     fibonacci(n);
     return 0;
}