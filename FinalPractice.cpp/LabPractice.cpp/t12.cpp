#include<iostream>
#include<fstream>
using namespace std;
bool isPrime(int n){
if(n<=1)
return false;
for(int i = 2; i*i <= n; i++){
	if(n%i==0){
	return false;
	}
	}	
return true;
}

int main(){
ofstream outfile;
 outfile.open("Numbers.txt");
int n;
cout<<"Enter any integer to check:"<<endl;
while(true){

cin>>n;
if(n==-1){
break;
}
outfile<<n<<endl;
}
outfile.close();


ifstream infile;
infile.open("Numbers.txt");
cout<<"\n Prime numbers from file is";
while(infile>>n){
if(isPrime(n)){
cout<<n<<" "<<"is Prime"<<endl;
}
}
infile.close();


}
