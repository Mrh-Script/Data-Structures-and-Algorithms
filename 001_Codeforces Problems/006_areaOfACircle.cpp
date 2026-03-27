#include<iostream>
#include<iomanip>
#define pi 3.141592653

using namespace std;

void calculateArea(double r){
    double area = pi * r * r;
    cout << fixed << setprecision(9) << area;
}

int main(){

    double R;
    cin >> R;

    calculateArea(R);

    return 0;
}
