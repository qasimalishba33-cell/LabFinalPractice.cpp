#include<iostream>
using namespace std;
void calculateRectangle(int l, int w, int &A, int &P){
A= l*w;
P=2*(l + w);
cout<<"Area = "<<A<<endl;
cout<<"Perimeter: "<<P<<endl;
}

int main()
{
int length, width, area, perimeter;
cout<<"Enter Length of the rectangle: ";
cin>>length;
cout<<"Enter Width of the rectangle: ";
cin>>width;
calculateRectangle(length, width, area, perimeter);
return 0;
}

