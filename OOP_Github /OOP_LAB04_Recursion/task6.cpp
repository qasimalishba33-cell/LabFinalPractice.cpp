#include<iostream>
using namespace std;
int countPaths(int m, int n){
    if(m==1||n==1)
        return 1;
    else
 return countPaths( m-1, n)+countPaths(m, n-1);
}
int main()
{
  int n;
  int m;
  cout << "Enter m : ";
  cin>>m;
  cout << "Enter n : ";
  cin>>n;
  int paths = countPaths( m, n);
  cout<<"No of possible paths of the grid "<<m<<"x"<<n<<" is "<<paths<<endl;
}
