#include<iostream>
using namespace std;
bool CheckArmstrong(int a){
int n1 = a/100;
int n2 = (a/10)%10;
int n3 = a % 10;
int cube = n1*n1*n1 + n2*n2*n2 + n3*n3*n3;
if (cube == a){

	return true;
	}
	
else {

return false;
	}	


}

bool CheckPalindrome(int a){
int n1 = a/100;
int n2 = (a/10)%10;
int n3 = a % 10;
if(n1 == n3){

return true;
}
else {

return false;
}

}

void CheckBoth(int a){
bool arm = CheckArmstrong(a);
bool pal = CheckPalindrome(a);
if(arm && pal){
cout<<"Number is both palindrome and armstrong"<<endl;

}
else if(arm){
cout<<"Number is an armstrong but not palindrome"<<endl;

}
else if(pal){
cout<<"Number is a palindrome but not an armstrong"<<endl;
}

else {
cout<<"Number is neither palindrome nor armstrong"<<endl;
}
}

int main(){
int a;
cout<<"Enter the number to check(100-1000):"<<endl;
cin>>a;

CheckBoth(a);


}
