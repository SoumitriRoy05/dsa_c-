// power of 2

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the value:"<<" ";
cin>>n;
bool isPower2=false;
for(int i=0;i<=30;i++)
{
    int ans=pow(2,i);
    if(ans==n)
    {
        isPower2=true;
        break;
    }
    else{
    cout<<"false"<<n;
    }
    cout<<ans;
}

}