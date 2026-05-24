//q#08
#include<iostream>
using namespace std;
void cyclicSwap(int *p1,int *p2,int *p3,int *p4){
int temp = *p1;
*p1= *p2;
*p2 = *p3;
*p3 = *p4;
*p4 = temp;
cout<<"a = "<<*p1<<"b = "<<*p2<<"c = "<<*p3<<"d = "<<*p4;

}
int main(){
int a, b ,c,d;
cout<<"Enter four numbers: "<<endl;
cin>>a>>b>>c>>d;
int *p1 = &a;
int *p2 = &b;
int *p3 = &c;
int *p4 = &d;
cout<<"Original elements are: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<" "<<endl;
cout<<"After first swap: ";
cyclicSwap(&a,&b,&c,&d);
cout<<"After second swap: ";
cyclicSwap(&a,&b,&c,&d);

return 0;
}
