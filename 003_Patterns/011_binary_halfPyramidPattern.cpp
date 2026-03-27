#include <iostream>
using namespace std;

int main() {
    int n = 7;

    for (int i = 1; i <= n; i++) {
        bool val = (i % 2 == 1); 

        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val = !val;
        }
        cout << endl;
    }

    return 0;
}
