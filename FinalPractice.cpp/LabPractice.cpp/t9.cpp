#include<iostream>
using namespace std;

void CountEvenOdd(int num, int &even, int &odd){
    even = 0;
    odd = 0;

    while (num != 0){
        int digit = num % 10;

        if (digit % 2 == 0)
            even++;
        else
            odd++;

        num = num / 10;
    }
}

int main(){
    int number = 786;
    int evenCount, oddCount;

    CountEvenOdd(number, evenCount, oddCount);

    cout << "Count of even digits: " << evenCount << endl;
    cout << "Count of odd digits: " << oddCount << endl;

    return 0;
}

