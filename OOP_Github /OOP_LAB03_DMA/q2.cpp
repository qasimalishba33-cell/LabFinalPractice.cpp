#include<iostream>
using namespace std;
int main(){
int a = 100;
int &ref1 = a;
int &ref2 = a;
cout<<"Original value : "<<a<<endl;
cout<<"ref1 :"<<ref1<<" "<<"ref2 : "<<ref2<<" "<<endl;
ref1 = 200;
cout<<"After modifying through ref1:"<<endl;
cout<<"value:"<<a<<"ref1 :"<<ref1<<"ref2 :"<<ref2<<endl;
return 0;
}

