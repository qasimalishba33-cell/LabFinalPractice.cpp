#include <iostream>
#include <string>
using namespace std;
bool isConsonant(char ch) {
bool isLetter = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
if (!isLetter) return false;
bool v = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
return !v;
}
int countConsonants(string str, int index) {
if (str[index] == '\0') {
    return 0;
    }
int currentCount = 0;
    if (isConsonant(str[index])) {
        currentCount = 1;
    }
return currentCount + countConsonants(str, index + 1);
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    int result = countConsonants(str, 0);
  cout << "Consonants: " << result << endl;
}
