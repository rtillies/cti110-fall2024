#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    // Richard Tillies
    // CTI-110-0003
    // CTI-110-0004
    // 2 + 3 = 5
    // -17 + 38 = 21
    // 7 + 29 = 36
    int first;
    int second;
    int result;
    cout << "Enter first number" << endl;
    cin >> first;
    cout << "Enter second number" << endl;
    cin >> second;
    result = first + second;
    cout << result << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
