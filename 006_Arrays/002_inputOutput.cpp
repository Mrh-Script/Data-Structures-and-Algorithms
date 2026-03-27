#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter the number of students : ";
    cin >> size;


    int marks[size];
  //  int s = sizeof(marks)/sizeof(int);

    //input
    cout << "Enter " << size << " student's marks here : " << endl;
    for(int i=0; i<size; i++){
        cout << "Student " << i+1 << " : ";
        cin >> marks[i];
    }

    //output
    cout << "The Marks are : " << endl;
    for(int i=0; i<size; i++){
        cout << marks[i] << " " << endl;
    }

    return 0;
}