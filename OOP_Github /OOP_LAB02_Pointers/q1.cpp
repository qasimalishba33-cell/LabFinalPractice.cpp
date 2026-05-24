



#include<iostream>
using namespace std;
int main()
{
int a=10, b=20, c=30, d=40, e=50;
cout<<"Variable 1: Value "<<a<<", Address = "<<&a<<endl;
cout<<"Variable 2: Value "<<b<<", Address = "<<&b<<", Offset = "<< (&b -&a) * sizeof(a) <<" bytes."<<endl;
cout<<"Variable 3: Value "<<c<<", Address = "<<&c<<", Offset = "<< (&c - &b) * sizeof(a)<<" bytes."<<endl;
cout<<"Variable 4: Value "<<d<<", Address = "<<&d<<", Offset = "<< (&d - &c) * sizeof(a)<<" bytes."<<endl;
cout<<"Variable 5: Value "<<e<<", Address = "<<&e<<", Offset = "<< (&e - &d) * sizeof(a)<<" bytes."<<endl;
return 0;
}


