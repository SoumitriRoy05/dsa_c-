#include<iostream>
#include<list>
using namespace std;
int main(){
list<int> l;
l.push_back(1);
l.push_front(2);
cout<<"List:"<<" ";
for(int i:l)
{
    cout<<i<<" ";
}
cout<<endl;
l.erase(l.begin());
cout<<"After erase:"<<" ";
for(int i:l)
    {
        cout<<i<<" ";
    }
cout<<endl;
l.size();
list<int>n(5,100);
cout<<"Printing n:"<<endl;
for(int i:n)
    {
        cout<<i<<" ";
    }
}