#include<iostream>
using namespace std;

void minMax(int a, int b, int c){
    int max, min;
    if(a>b && a>c){
        max = a;
    } else if(b>c){
        max = b;
    } else {
        max = c;
    }

    if(a<b && a<c){
        min = a;
    } else if(b<c){
        min = b;
    } else {
        min = c;
    }

    cout << min << " " << max;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    minMax(a,b,c);

}