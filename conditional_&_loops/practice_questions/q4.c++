#include<iostream>
using namespace std;
int main()
{
char ch;
cin>>ch;
cout<<"Enter the charecter"<<" "<<ch<<endl;
if(ch>='a' && ch<='z')
{
    cout<<"Entered charecter is lowercase"<<endl;
}
else if(ch>='A' && ch<='Z')
{
    cout<<"Enter charecter is in Uppercase"<<endl;
}
else if(ch>='0' && ch<='9')
{
    cout<<"Enter charecter is numeric"<<endl;
}
}