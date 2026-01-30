// Fibonacci Series : 0 1 1 2 3 5 8 13 21 34 55 ..........
// Here, n=10 th value is : 34

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int first = 0, sec = 1;
    cout << "Fibonacci Series to " << n << " : " << first << " " << sec << " ";

    for(int i=2; i<n; i++){
        int third = first + sec;
        cout << third << " ";

        first = sec;
        sec = third;
    }

    cout << "\n";
}
