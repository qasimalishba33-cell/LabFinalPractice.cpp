#include <iostream>
using namespace std;
void printDescending(int n)
{
    if (n <= 0) return;
    cout << n << " ";
    printDescending(n - 1);
}
void printAscending(int n)
{
    if (n <= 0) return;
    printAscending(n - 1);
    cout << n << " ";
}
int main() {
    int n;
    cout <<"Enter upper limit : ";
    cin>>n;
    cout << "Descending: ";
    printDescending(n);
    cout<<endl;
    cout << "Ascending: ";
    printAscending(n);
    cout<<endl;
}
