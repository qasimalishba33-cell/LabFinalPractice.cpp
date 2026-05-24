
#include<iostream>
using namespace std;

void kgToPounds(double& weight, double* pounds)
{
*pounds = weight * 2.205;
cout<<"Weight in pounds: "<<*pounds<<endl;
}

void kgToGrams(double* weight, double* grams)
{
*grams = *weight * 1000;
cout<<"Weight in grams: "<<*grams<<endl;
}

void poundsToOunces(double& pounds, double* ounces){
*ounces = pounds * 16;
cout<<"Weight in ounces: "<< *ounces<<endl;
}
void convertAllWeights(double weight, double *grams, double *pounds, double *ounces){
cout<<"Kilograms: "<< weight<<endl;
cout<<"Grams: "<< *grams<<endl;
cout<<"Pounds: "<< *pounds<<endl;
cout<<"Ounces: "<< *ounces<<endl;
}
int main()
{
double weight, pounds, grams, ounces;
cout<<"Enter weight in kg: ";
cin>>weight;
cout<<endl;
cout<<"Weight in kg= "<<weight<<endl;
kgToGrams(&weight, &grams);
kgToPounds(weight, &pounds);
poundsToOunces(pounds, &ounces);
cout<<"Converting 5 kg to all units:"<<endl;
convertAllWeights(weight, &grams, &pounds, &ounces);
return 0;
}


