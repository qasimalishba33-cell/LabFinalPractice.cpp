#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outfile("Marks.txt");

    string name;
    int marks;
    int total = 0;
    int count = 0;

    cout << "Enter the name of students and their marks:\n";

    while (true) {
        cin >> name >> marks;

        if (name == "end" || marks == -1)
            break;

        outfile << name << " " << marks << endl;
    }

    outfile.close();

    ifstream infile("Marks.txt");

    while (infile >> name >> marks) {
        total += marks;
        count++;
    }

    infile.close();

    if (count == 0) {
        cout << "No data found\n";
        return 0;
    }

    int average = total / count;
    cout << "Class average is equals to: " << average << endl;

    infile.open("Marks.txt");
    cout << "\nStudents scoring above average:\n";

    while (infile >> name >> marks) {
        if (marks > average) {
            cout << name << endl;
        }
    }

    infile.close();
    return 0;
}

