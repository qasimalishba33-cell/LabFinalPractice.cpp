#include<iostream>
using namespace std;
void pointerSafety(int*ptr){
if(ptr == nullptr){
cout<<"Unsafe call (nullptr): Error: Null pointer detected!"<<endl;
return;
}


cout<<"Safe call : Value = "<<*ptr<<endl;
}



int main(){
int num = 50;
int *ptr = &num;

pointerSafety(ptr);
int *nullpointer = nullptr;
pointerSafety(nullpointer);
return 0;
}
