#include <iostream>
using namespace std;

int main() {
    int A = 0, B = 0;
    char op;

    string expr;
    cin >> expr;

    int i = 0;

    // Read first number
    while(i < expr.size() && isdigit(expr[i])) {
        A = A * 10 + (expr[i] - '0');
        i++;
    }

    // Read operator
    op = expr[i];
    i++;

    // Read second number
    while(i < expr.size() && isdigit(expr[i])) {
        B = B * 10 + (expr[i] - '0');
        i++;
    }

    // Calculate result
    int result = 0;
    if(op == '+') result = A + B;
    else if(op == '-') result = A - B;
    else if(op == '*') result = A * B;
    else if(op == '/') result = A / B; // integer division

    cout << result << endl;

    return 0;
}
