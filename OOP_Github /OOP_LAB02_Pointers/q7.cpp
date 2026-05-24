
#include<iostream>
using namespace std;
void calculatePowers(int a,int *square,int *cube)
{
*square = a * a;
*cube = a * a * a;
}

int main()
{
int a;
int square;
int cube;

cout<<"Enter the number: ";
cin>>a;

calculatePowers(a,&square,&cube);

cout<<"Number:"<<a<<endl;
cout<<"Square of a number: "<<square<<endl;
cout<<"Cube of a number: "<<cube<<endl;
return 0;
}

