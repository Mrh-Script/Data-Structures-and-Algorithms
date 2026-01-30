/*

*
**
***
****

Here,
Row (i) = 4, So, outer loop = 4
When,
Row = 1, Print 1 = *
Row = 2, Print 2 = **
Row = 3, Print 3 = ***
Row = 4, Print 4 = ****

That means, Inner loop (j) is Upto value of Row (i)

*/


#include <iostream>
using namespace std;

int main() {

    //Outer Loop
    for (int i = 1; i <= 4; i++) {
        //Inner Loop
        for(int j=1; j<=i; j++){
            //Work
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}
