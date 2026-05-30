#include<iostream>
using namespace std;
int main(){
int a = 29;
int *ptr = &a;
int *ptr2 = new int;
cout<<"Stack variable address : "<<ptr<<endl;
cout<<"Heap variable address : "<<ptr2<<endl;
cout<<"Stack grows downward , heap grows upward."<<endl;
return 0;
}
