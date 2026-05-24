
#include<iostream>
using namespace std;
void multiplyFactor(int*p, int f)
{
 *p=*p*f;
}
int main()
{
int num;
cout<<"Enter your number : ";
cin>>num;
int*p=&num;
int fact;
cout<<"Enter your factor : ";
cin>>fact;

cout<<"Before = "<<num<<endl;
multiplyFactor(p,fact);
cout<< "After = "<<num<<endl;
}

