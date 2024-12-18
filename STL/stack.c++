#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("Hello");
    s.push("Everyone");
    cout<<"Top element:"<<" "<<s.top()<<endl;
    s.pop();
    cout<<"Top element after popping:"<<" "<<s.top()<<endl;
    cout<<s.size()<<endl;
}