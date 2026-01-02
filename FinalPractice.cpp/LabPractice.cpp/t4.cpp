#include<iostream>
#include<string>
using namespace std;
int main(){
string pin = "Pakistan123";
string password;
int i = 1;
do{
cout<<"Enter the pin : "<<endl;
cin>>password;
if(password == pin){
cout<<"Pin entered correct"<<endl;
break;
}
else{
i++;
}
if(i<=3){
cout<<"Incorrect password! try again"<<endl;
}

}
while(i<=3);
if(i>3){
cout<<"Maximum attempts to unlck is reached account lock"<<endl;
}


}

 
