#include<iostream>
using namespace std;

int digitSum(int n){
    int sum = 0;

    while(n > 0){
        int digits = n % 10;
        sum += digits;
        n = n / 10;
    }
    return sum;
}

int main(){

    int N;
    cout << "Enter the number : ";
    cin >> N;

    cout << "Sum of the Digits of " << N << " : " << digitSum(N);

    return 0;
}

