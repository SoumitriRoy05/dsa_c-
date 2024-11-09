// output-->
// ABC
// BCD
// CDE
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
        while(j<=n)
        {
            cout<<(char)('A'+i+j-2);
            j++;
        }
        cout<<endl;
        i++;
    }
}