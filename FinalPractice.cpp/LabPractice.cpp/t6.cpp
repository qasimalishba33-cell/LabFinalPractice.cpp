#include<iostream>
using namespace std;
int main(){
int matrix[3][3];
int rows = 3;
int cols = 3;
cout<<"Enter the elements of square matrix:"<<endl;
for (int i = 0; i < rows; i++){
	for (int j = 0; j < cols; j++){
	cin>>matrix[i][j];
	}
	cout<<endl;
	}
for (int i = 1; i < rows; i++){
	for(int j = 0; j < i; j++){
		if(matrix[i][j] != 0){
		cout<<"not upper triangular diagnol matrix:  ";
		return 0;
		}
		
	}
		cout<<endl;
	}
cout<<"Upper triangular matrix:"<<endl;
return 0;		
}	
	

