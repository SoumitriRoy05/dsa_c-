#include<iostream>
using namespace std;
//1-->Even
//0-->Odd
bool evenOdd(int num)
{
    //odd
    if(num&1)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int num;
    cout<<"Enter a number:"<<" ";
    cin>>num;
    if(evenOdd(num))
    {
        cout<<"It is an Even number"<<endl;
    }
    else{
        cout<<"It is an odd number"<<endl;
    }
    return 0;
}