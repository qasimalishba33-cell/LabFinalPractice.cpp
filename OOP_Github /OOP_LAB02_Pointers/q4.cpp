
#include<iostream>
using namespace std;
int main()
{
int score =85;
int &marks =score;
cout<<endl<<"===============INITIAL================="<<endl;
cout<<"Score : "<<score<<"       Adress: "<<&score<<endl<<"Marks : "<<marks<<"       Adress: "<<&marks<<endl;
marks+=15;
cout<<endl<<"=======AFTER ADDING 15 TO MARKS========"<<endl;
cout<<"Score : "<<score<<"       Adress: "<<&score<<endl<<"Marks : "<<marks<<"       Adress: "<<&marks<<endl;
}

