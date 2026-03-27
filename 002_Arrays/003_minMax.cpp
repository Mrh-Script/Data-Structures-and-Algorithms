#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter the number of students : ";
    cin >> size;

    cout << endl;


    int marks[size];
  //  int s = sizeof(marks)/sizeof(int);

    cout << "Enter " << size << " student's marks here : " << endl;
    for(int i=0; i<size; i++){
        cout << "Student " << i+1 << " : ";
        cin >> marks[i];
    }

    int min = marks[0];
    int max = marks[0];

    for(int i=0; i<size; i++){
        if(marks[i] < min){
            min = marks[i];
        }

        if(marks[i] > max){
            max = marks[i];
        }
    }

    cout << endl;

    cout << "Highest Mark : " << max << endl;
    cout << "Lowest Mark : " << min << endl;

    return 0;
}