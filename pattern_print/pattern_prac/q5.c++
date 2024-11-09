// output-->
// A
// BC
// DEF
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char a='A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
        cout<<a;
        a++;
        j++;
        }
        cout<<endl;
        i++;
    }
}