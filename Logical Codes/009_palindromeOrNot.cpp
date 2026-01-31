#include<iostream>
using namespace std;

int reverse(int n){
    int result = 0;

    while(n > 0){
        int lastDigit = n % 10;
        result = result * 10 + lastDigit;
        n = n / 10;
    }
    return result;
}

bool isPalindrome(int num){
    int revNum = reverse(num);
    return num == revNum;
}

int main(){

    int N;
    cout << "Enter the number : ";
    cin >> N;

    if(isPalindrome(N)){
        cout << N << " is a Palindrome number." << endl;
    }
    else {
        cout << N << " is NOT a Palindrome number." << endl;
    }

    return 0;
}

