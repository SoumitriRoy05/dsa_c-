#include<iostream>
using namespace std;
int main()
{
     int c=6;
     int d=6;
     bool first=(c==d);
     cout<<first<<endl;    //output--->1{true}

     bool second=(c>d);
     cout<<second<<endl;   //output--->0(false)

     bool third=(c<d);
     cout<<third<<endl;   //output--->0(false)
     
     bool fourth=(c>d);
     cout<<fourth<<endl;   //output--->0(false)
     
     bool fifth=(c>=d);
     cout<<fifth<<endl;   //output--->1(true)
     
     bool sixth=(c<=d);
     cout<<sixth<<endl;   //output--->1(true)
     
     bool seventh=(c!=d);
     cout<<seventh<<endl;  //output--->0(false)
}