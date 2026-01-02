#include<iostream>
using namespace std;
int main(){
int size = 10;
int array[10] = {5,6,4,7,8,3,2,9,10,1};
int number = 13;
for (int i = 0; i<size - 1; i++){
	for (int j = i+1; j < size; j++){
		if(array[i]+array[j] == number){
		cout<<"the pair whose sum is equal to target is :"<<array[i]<<","<<array[j]<<","<<endl; 
		}
		
		}
	}
	
}	
		
	
