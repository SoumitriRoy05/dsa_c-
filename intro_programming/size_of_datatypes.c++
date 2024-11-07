#include<iostream>
using namespace std;
int main()
{
int a=2005;
char b='S';
bool bl=true;      
float c=9.5;
double d=9.25;

int size_int=sizeof(a);
int size_char=sizeof(b);
int size_bool=sizeof(bl);
int size_float=sizeof(c);
int size_double=sizeof(d);

cout<<"The size of int datatype:\t"<<size_int<<endl;        
cout<<"The size of float datatype:\t"<<size_char<<endl;
cout<<"The size of bool datatype:\t"<<size_bool<<endl;
cout<<"The size of float datatype:\t"<<size_float<<endl;
cout<<"The size of double datatype:\t"<<size_double<<endl;
}