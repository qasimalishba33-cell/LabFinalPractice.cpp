#include<iostream>
using namespace std;
int main()
{
float x=1.1, y=2.2, z=3.3;
float *p=&x;
cout<<"Pointer to x "<<*p<<endl;
p=&y;
cout<<"Pointer to y "<<*p<<endl;
p=&z;
cout<<"Pointer to z "<<*p<<endl;
*p=*p+4.4;
p=&x;
*p=*p+4.4;
p=&y;
*p=*p+4.4;
cout<<endl<<endl<<"=======After Modification========"<<endl;
p=&x;
cout<<"Pointer to x "<<*p<<endl;
p=&y;
cout<<"Pointer to y "<<*p<<endl;
p=&z;
cout<<"Pointer to z "<<*p<<endl;
}
