#include<iostream>
using namespace std;
int main(){
char array[11] = {'A','o','#','*','i','B','d','2','5','6','\0'};
int vowels = 0;
int constants = 0;
int digits = 0;
int sp = 0;

int i = 0;
while(array[i]!='\0'){
if(array[i] == 'a' || array[i] == 'e' || array[i] == 'o' || array[i] == 'i' || array[i] == 'u' || array[i] == 'A' || array[i] == 'E' || array[i] == 'O' || array[i] == 'U' || array[i] == 'I'){
vowels++;
}

else if  ( array [i] == '1' || array[i] == '2' || array[i] == '3' || array[i] == '4' || array[i] == '5' || array[i] == '6' || array[i] == '7'|| array[i] == '8' || array[i] == '9'){
digits++;
}
else if (array[i] >='A' && array[i] <='Z' || array[i] >= 'a' && array[i] <='z'){
constants++;
}
else{
sp++;
}
i++;
}
cout<<"NO of vowels in character array is :"<<vowels<<endl;
cout<<"NO of digits in character array is :"<<digits<<endl;
cout<<"NO of constants in character array is :"<<constants<<endl;
cout<<"NO of special characters in character array is :"<<sp<<endl;
}


