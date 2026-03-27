#include<iostream>
using namespace std;

int combinedMarks(float att, float hw, float exam){

    if(att > 100 || hw > 100 ||exam > 100){
        cout << "Invalid marks." << endl;
        return -1;
    }

    float totalMarks =
        att * 0.20 +
        hw  * 0.30 +
        exam * 0.50;

    return (int) totalMarks;
}

int main(){

    float attendance, homework, exam;

    cout << "Enter your Attendance Marks : ";
    cin >> attendance;

    cout << "Enter your Homework Marks : ";
    cin >> homework;

    cout << "Enter your Exam Marks : ";
    cin >> exam;

    int result = combinedMarks(attendance, homework, exam);

    if(result != -1){
        cout << "\nYour Combined Marks : " << result;
    }

    return 0;
}
