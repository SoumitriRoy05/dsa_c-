// output-->
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=n;
    while(i>0)
    {
       int j=0;
        while(j<i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
}