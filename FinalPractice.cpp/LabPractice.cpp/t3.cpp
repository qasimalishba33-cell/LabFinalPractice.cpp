#include<iostream>
using namespace std;
int main(){
int h ;
int  highest = 0;
int  count = 0;
int  total = 0;

 while(true){
 cout<<"Enter production of each hour"<<endl;
 cin>>h;
  if (h == -1){
  break;
	}
	total+=h;
	count++;
	if(h > highest){
	highest = h;
	}
	}
if(count>0){

cout<<"total production hours: "<<total<<endl;	
cout<<"Average value of production: "<<total/count<<endl;
cout<<"Highest production hour: "<<highest<<endl; 
}

else{
cout<<"No data produced:";
}
}



