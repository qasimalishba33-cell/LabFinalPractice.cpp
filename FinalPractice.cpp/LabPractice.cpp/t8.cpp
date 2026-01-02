#include<iostream>
using namespace std;
int SecondLargest(int array[], int size){
int largest = array[0];
int secLarge = -1;

if ( size < 2){
return -1;
}
		
for (int i = 0; i < size; i++){
	if (array[i] > largest){
		secLarge = largest;
		largest = array[i];
		}
	else if(array[i] > secLarge && secLarge!=largest){
	secLarge = array[i];	
	}
}
	
	return secLarge;
	

}
int main(){
int array[10] = {76,23,86,13,245,209,645,1000,689,357};
int size = 10;
cout<<SecondLargest(array,10);

}

