
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int **ptr = new int *[4];

for(int i=0; i<4; i++){
ptr[i] = new int[4];
}

cout<<"Enter elements of the 4-by-4 matrix: ";
for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
    cin>>ptr[i][j];
    }
}

cout<<"Original 4-by-4 Matrix: "<<endl;

for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
    cout<<setw(5)<<ptr[i][j]<<setw(5);
    }
    cout<<endl;
}

cout<<"Sparse Representation: "<<endl;

for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        if(ptr[i][j] !=0){
            cout<<"("<<i<<","<<j<<"): "<<ptr[i][j]<<endl;
        }  
    }
}

for(int i=0; i<4; i++){
    delete[] ptr[i];
}

delete[] ptr;

return 0;
}
