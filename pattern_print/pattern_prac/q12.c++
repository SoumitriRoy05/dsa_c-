// output-->
// 12344321
// 123**321
// 12****21
// 1******1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        int a=1;
        while(a<=2*(i-1))
        {
            cout<<"*";
            a++;
        } 
        j=n-i+1;
        while(j>=1)
        {
            cout<<j;
            j--;
        }  
        cout<<endl;
        i++; ;    
    }
}