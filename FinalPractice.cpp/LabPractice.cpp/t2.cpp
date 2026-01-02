#include<iostream>
using namespace std;

	int modify(int&a, int b){
	int sum = 0;
	int product = 1;
	int n1 = b/100;
	int n2 = (b/10)%10;
	int n3 = b%10;
	sum = n1 + n2 + n3;
	 a = a + sum; //modify a value
	product = n1 * n2 *n3;
	return product;
	}


int main(){
int a = 190;
int b = 524;
modify(a, b);
cout<<a<<"updated value of a"<<" "<<b<<" ";
cout<<modify(a,b)<<"product of digits of b"<<" ";
return 0;
}



