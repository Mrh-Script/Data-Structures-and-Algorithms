#include <iostream>
using namespace std;

int main() {

    //Outer Loop
    for (int i = 1; i <= 4; i++) {
        //Inner Loop
        for(int j=1; j<=i; j++){
            //Work
            cout << j;
        }
        cout << endl;
    }

    return 0;
}