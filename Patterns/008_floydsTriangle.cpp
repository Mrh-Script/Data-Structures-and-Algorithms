#include <iostream>
using namespace std;

int main() {

    int n = 5;

    int num = 1;

    //Outer Loop
    for (int i = 1; i <= n; i++) {
        //Inner Loop
        for(int j=1; j<=i; j++){
            //Work
            cout << num++ << "\t";
        }
        cout << endl;
    }

    return 0;
}