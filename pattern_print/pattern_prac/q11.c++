// output-->
// 1234
//  123
//   12
//    1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=n;
    while(i>=1)
    {
       int spaces=n-i;
       int num=1;
       while(spaces>0)
       {
        cout<<" ";
        spaces--;
       }
       int j=i;
        while(j>0)
        {
            cout<<num;
            num++;
            j--;
        }
        cout<<endl;
        i--;
    }
}