// An Armstrong number is a number that is equal to the sum of cubes of its digits

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int num = n;
    int cubeSum = 0;
    
    while(n > 0){
        int lastDig = n%10;
        cubeSum += (lastDig * lastDig * lastDig);
        n /= 10;
    }

    if(num == cubeSum){
        cout << "Armstrong Number" << endl;
    }
    else{
        cout << "Not Armstrong Number!" << endl;
    }
}
