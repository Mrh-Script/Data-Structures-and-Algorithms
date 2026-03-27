#include <iostream>
using namespace std;

int main() {

    int n = 4;

    char ch = 'A';

    //Outer Loop
    for (int i = 1; i <= n; i++) {
        //Inner Loop
        for(int j=1; j<=i; j++){
            //Work
            cout << ch++;
        }
        cout << endl;
    }

    return 0;
}