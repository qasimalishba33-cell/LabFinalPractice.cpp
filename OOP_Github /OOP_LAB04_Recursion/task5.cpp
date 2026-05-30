#include <iostream>
using namespace std;
int reverseInt(int n, int rev) {
cout << " Soo far the reversed digit " << rev << endl;
if (n == 0) {
        return rev;
    }
  return reverseInt(n / 10, rev * 10 + n % 10);
}
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
  int result = reverseInt(number, 0);
    cout << "Reversed: " << result << endl;
}
