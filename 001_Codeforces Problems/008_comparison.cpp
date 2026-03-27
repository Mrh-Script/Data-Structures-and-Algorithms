#include<iostream>
using namespace std;

void comparison(int a, char s, int b){

    if (s == '>') {
        cout << (a > b ? "Right" : "Wrong") << endl;
    }
    else if (s == '<') {
        cout << (a < b ? "Right" : "Wrong") << endl;
    }
    else {
        cout << (a == b ? "Right" : "Wrong") << endl;
    }
}

int main(){

    int A, B;
    char S;
    cin >> A >> S >> B;

    comparison(A, S, B);

    return 0;
}
