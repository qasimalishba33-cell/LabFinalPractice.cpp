#include<iostream>
using namespace std;
int main(){
char str[20] = "Mutable";
char *p = str;
cout<<"Original :"<<p<<endl;
*(p + 0) = 'C';
*(p + 1) = 'h';
*(p + 2) = 'a';
*(p + 3) = 'n';
*(p + 4) = 'g';
*(p + 5) = 'e';
*(p + 6) = 'a';
*(p + 7) = 'b';
*(p + 8) = 'l';
*(p + 9) = 'e';
*(p + 10) = '\0';




cout<<"After pointer modification : "<<p;
return 0;
}
