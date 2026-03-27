#include<iostream>
using namespace std;

void floatInt(double n){

    if(n == (int)n){
        cout << "int " << (int)n;
    }
    else {
        cout << "float " << (int)n << " " << n-(int)n << endl;
    }

}

int main(){

    double n;
    cin >> n;

    floatInt(n);

    

    return 0;
}