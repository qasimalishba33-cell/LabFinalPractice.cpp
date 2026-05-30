#include<iostream>
using namespace std;
int main(){
int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int *ptr = &matrix[0][0];
cout<<"Matrix using single pointer "<<endl;
cout<<*(ptr + 0*3+0)<<" "<<*(ptr + 0*3+1)<<" "<<*(ptr + 0*3+2)<<""<<endl;
cout<<*(ptr + 1*3 + 0)<<" "<<*(ptr+1*3+1)<<" "<<*(ptr + 1*3 +2)<<" "<<endl;
cout<<*(ptr + 2*3 +0)<<" "<<*(ptr + 2*3+1)<<" "<<*(ptr +2*3 +2)<<" "<<endl;
return 0;
}


