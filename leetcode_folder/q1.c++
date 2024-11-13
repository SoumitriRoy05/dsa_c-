#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the value of integer:"<<endl;
cin>>n;
int pro=1;
int sum=0;
while(n!=0)
{
    int rem=n%10;
    pro=pro*rem;
    sum=sum+rem;

    n=n/10;
}
int answer=pro-sum;
cout<<"Result:"<<" "<<answer<<endl;
}