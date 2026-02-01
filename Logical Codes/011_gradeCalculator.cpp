#include<iostream>
#include<cmath>
using namespace std;

int combinedMarks(int att, int hw, int exam){

    if(att > 100 || hw > 100 || exam > 100){
        cout << "Invalid marks." << endl;
        return 0;  
    }

    float totalMarks =
        att * 0.20 +
        hw  * 0.30 +
        exam * 0.50;

    return round(totalMarks); 
}

int main(){

    int attendance, homework, exam;

    cout << "Enter your Attendance Marks : ";
    cin >> attendance;

    cout << "Enter your Homework Marks : ";
    cin >> homework;

    cout << "Enter your Exam Marks : ";
    cin >> exam;

    int result = combinedMarks(attendance, homework, exam);

    if(result != 0){
        cout << "\nYour Combined Marks : " << result;
    }

    return 0;
}
