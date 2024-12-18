#include<iostream>
#include<array>
using namespace std;
int main()
{
   
    array<int ,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<"";
    }
    cout<<"Element at index:"<<a.at(2)<<endl;   //element at a particular index
    cout<<"Empty or not:"<<a.empty()<<endl;     //to check whether empty or not
    cout<<"First element:"<<a.front()<<endl; 
    cout<<"Last element:"<<a.back()<<endl;   
    return 0;
}