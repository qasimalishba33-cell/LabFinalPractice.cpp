#include<iostream>
using namespace std;
int main(){
char arr[12] = {'A','B','C','D','E','F','F','G','H','I','a','\0'};
int i = 0;
int n = 12;
while(arr[i]!='\0'){
for(int i = 0; i<n/2 ;i++){
int temp = arr[i];
arr[i] = arr[i+n-1];
arr[i+n-1] = temp;
}
cout<<arr[i];
}
}

