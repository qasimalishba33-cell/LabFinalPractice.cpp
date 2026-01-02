#include<iostream>
using namespace std;
void swapAlternate(int arr[], int size){
for(int i = 0; i < size; i+=2){
	if(i + 1 < size){
		int temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
}
}
}
int main(){
int arr[8] = { 12,45,67,87,42,59,07,37};
int size = 8;
cout<<"Array after swapping:"<<endl;
swapAlternate(arr,8);
for(int i = 0; i <size; i++){
cout<<arr[i]<<" , ";
}




}
