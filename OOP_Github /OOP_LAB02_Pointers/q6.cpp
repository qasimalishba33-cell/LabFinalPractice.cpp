
#include<iostream>
using namespace std;
int* findSmaller(int &a,int &b)
{
int *smallest = &a;
if(a>b)
smallest=&b;
return smallest;

}
int main(){
int a ;
int b;
cout<<"Enter the first number: "<<endl;
cin>>a;
cout<<"Enter the second number: "<<endl;
cin>>b;
int*s=findSmaller(a,b);
*s=*s+50;
 cout<<"After adding 50 to smaller:"<<*s<<endl;
}
