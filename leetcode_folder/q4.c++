// 2nd mehod-->reverse integer

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<" ";
    cin>>n;
     int ans=0;
    //  INT_MAX, INT_MIN;
    while(n!=0)
    {
        int digit=n%10;
       if((ans>INT_MAX/10)||(ans>INT_MIN/10))
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<"The reverse integer:"<<" "<<ans;
}