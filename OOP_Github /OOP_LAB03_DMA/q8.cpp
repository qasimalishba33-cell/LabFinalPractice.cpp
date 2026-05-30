

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of strings ";
cin>>n;
char** c= new char*[n];
for(int i=0;i<n;i++)
{
c[i]=new char[10];
cout<<"Enter string "<<endl;
cin>>c[i];
}
cout<<"Strings " <<endl;
for(int i=0;i<n;i++)
{

cout<<c[i]<<endl;
}
for(int d=0;d<n;d++)
{
delete[] c[d];
}

delete[] c;
}

