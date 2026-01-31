// nCr = n! / (r! * (n-r)!)

#include<iostream>
using namespace std;

int factorial(int n){
        int fact = 1;
        for(int i=n; i>=1; i--){
            fact *= i;
        }
        return fact;
    }

    int binomialCoeff(int n, int r){
        int val1 = factorial(n);
        int val2 = factorial(r);
        int val3 = factorial(n-r);

        int result = val1 / (val2 * val3);

        cout << n << "C" << r << " = " << result << endl;

        return result;
    }

int main(){

    binomialCoeff(3,2);
    binomialCoeff(5,2);
    binomialCoeff(6,3);

    return 0;
}