//Problem : Sort the given Characters in Descending order Using Insertion Sort 
//Array , ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};

#include<iostream>
using namespace std;

void printArray(char ch[], int n){
    cout << "Sorted Characters : ";
    for(int i=0; i<n; i++){
        cout << ch[i] << " ";
    }
    cout << endl;
}

void charSort(char ch[], int n){
    for(int i=1; i<n; i++){
        int current = ch[i];
        int previous = i-1;

        while(previous >= 0 && ch[previous] < current){     // In Descending Order
            swap(ch[previous] , ch[previous + 1]);
            previous--;
        }
        ch[previous + 1] = current;
    }

    printArray(ch, n);
}

int main(){
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch) / sizeof(char);

    charSort(ch, n);

    return 0;
}
