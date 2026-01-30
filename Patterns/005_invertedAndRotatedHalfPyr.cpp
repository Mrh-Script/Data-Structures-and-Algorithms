#include <iostream>
using namespace std;

int main() {

    int n=10;

    //Outer Loop
    for (int i = 1; i <= n; i++) {
        //Inner Loops

        //for Spaces
        for(int j=1; j<=n-i; j++){
            //Work
            cout << " ";
        }

        //for Stars
        for(int k=1; k<=i; k++){
            //Work
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}