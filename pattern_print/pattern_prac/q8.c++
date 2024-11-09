// output-->
// ****
//  ***
//   **
//    *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
       int spaces=i-1;
       int s=n-i+1;
       while(spaces>0)
       {
        cout<<" ";
        spaces--;
       }
        while(s>0)
        {
            cout<<"*";
            s--;
        }
        cout<<endl;
        i++;
    }
}