/*

****
***
**
*

Here,
Row = 4, So, outer loop (i) = 4
When,
Row = 1, Print 4 = ****
Row = 2, Print 3 = ***
Row = 3, Print 2 = **
Row = 4, Print 1 = *

That means, When, i = 1, j=4
                  i = 2, j=3   and so on.....

                  Formula is : n - i + 1;
                  Here, 4 - i + 1;

*/
 

#include <iostream>
using namespace std;

int main() {

    //Outer Loop
    for (int i = 1; i <= 4; i++) {
        //Inner Loop
        for(int j=1; j<=(4-i+1); j++){
            //Work
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}
