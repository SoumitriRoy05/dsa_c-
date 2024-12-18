#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Size:"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size:"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size:"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size:"<<v.capacity()<<endl;
    cout<<"No. of elements present:"<<v.size()<<endl;
    cout<<"Element at a particular index:"<<v.at(2)<<endl;
    cout<<"Element at first:"<<v.front()<<endl;
    cout<<"Element at last:"<<v.back()<<endl;

    cout<<"Before pop:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<"After clearing:"<<endl;
    for(int i:v)
    {
        cout<<i<<"";
    }
}