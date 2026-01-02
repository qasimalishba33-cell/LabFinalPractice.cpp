#include<iostream>
using namespace std;
int main(){
int count1 = 0;
int count2 = 0;
int count3 = 0;
	for (int i = 0; i < 500; i++){
		if(i % 3 == 0 && i % 5 == 0){
		
			count3++;
			}
		else if(i % 5 == 0){
		
		 	count2++;
			}
		else if(i % 3 == 0  ){
		
			count1++;
			}
		}
	cout<<"FIZZ appears" <<" "<<count1<<" "<< "times"<<endl;	
	cout<<"BUZZ appears" <<" "<<count2<<" "<< "times"<<endl;
	cout<<"FIZZBUZZ appears"<<" " <<count3<<" "<< "times"<<endl;
}			
