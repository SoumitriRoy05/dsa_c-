#include<iostream>
using namespace std;
//1-->is prime
//0-->not prime
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }

    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"Is a prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
    return 0;
}