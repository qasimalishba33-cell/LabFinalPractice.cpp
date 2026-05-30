#include <iostream>
using namespace std;

int sumEven(int n)
{
if (n <= 0)
    return 0;
if (n % 2 == 0)
{
return n + sumEven(n - 1);
    }
return sumEven(n - 1);
}
int sumOdd(int n) {
if (n <= 0)
    return 0;
if (n % 2 != 0) {
    return n + sumOdd(n - 1);
    }
return sumOdd(n - 1);
}
int main() {
    int n;
     cout <<"Enter upper limit : ";
    cin>>n;
    cout << "Sum of even numbers: " << sumEven(n) << endl;
    cout << "Sum of odd numbers: " << sumOdd(n) << endl;
}
