#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream infile;
    ofstream outfile;
    char ch;

    infile.open("Input.txt");   // must exist with same case
    outfile.open("Output.txt");

    if (!infile) {
        cout << "Error opening infile!" << endl;
        return 1;
    }

    while (infile.get(ch)) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        outfile.put(ch);
    }

    infile.close();
    outfile.close();

    cout << "Files copied and characters converted to uppercase successfully" << endl;
    return 0;
}

