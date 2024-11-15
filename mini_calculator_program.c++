//mini_calculator_program
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a:"<<" ";
    cin>>a;
    cout<<"Enter the value of b:"<< " ";
    cin>>b;
    char operation;
    cout<<"Enter the operation to be performed:"<<" ";
    cin>>operation;
    cout<<endl;
    switch(operation)
    {
        case '+':
        cout<<(a+b)<<endl;
        break;
        case '-':
        cout<<(a-b)<<endl;
        break;
        case '*':
        cout<<(a*b)<<endl;
        break;
        case '/':
        cout<<(a/b)<<endl;
        break;
        case '%':
        cout<<(a%b)<<endl;
        break;
        default:
        cout<<"Enter a valid operation:"<<endl;
    }
}