#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(4);
    cout<<"Elements in queue:"<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    cout<<"Popped back element:"<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Element at an index:"<<" "<<d.at(2)<<endl;
    cout<<"Before erase:"<<" "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase:"<<endl;
    for( int i:d)
    {
        cout<<i<<" ";
    }
}