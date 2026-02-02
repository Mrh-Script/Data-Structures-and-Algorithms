#include <iostream>
#include <sstream>
using namespace std;

void areBrothers(string a, string b) {
    string fName1, lName1;
    string fName2, lName2;

    stringstream bro1(a);
    bro1 >> fName1 >> lName1;

    stringstream bro2(b);
    bro2 >> fName2 >> lName2;

    if (lName1 == lName2) {
        cout << "ARE Brothers" << endl;
    } else {
        cout << "NOT" << endl;
    }
}

int main() {
    string name1, name2;

    getline(cin, name1);
    getline(cin, name2);

    areBrothers(name1, name2);

    return 0;
}
