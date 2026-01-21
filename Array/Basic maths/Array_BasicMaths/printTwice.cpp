#include <iostream>
using namespace std;

void printTwice(int arr[], int size){
    for(int i=0; i<=size-1; i++){
        cout << (2*arr[i]) <<", ";
    }
}

void printEvenOdd(int arr[], int size){
    for(int i=0; i<size; i++){
        int number = arr[i];
        if(number %2 == 0){
            cout << "Even ";
        }else{
            cout << "Odd ";
        }
    }
}

void countZeroOnes(int arr[], int size){
    int totalZero =0;
    int totalOne =0;

    for(int i=0; i<size; i++){
        int number = arr[i];

        if(number == 0){
            totalZero++;
        }
        else if(number == 1){
            totalOne++;
        }
    }
    cout << endl;
    cout << "Total Zero: " << totalZero <<endl;
    cout << "Total One: " << totalOne <<endl;
}

int main(){
    int arr[10] = {0,1,1,0,0};
    int size = 5;

    printTwice(arr, size);
    printEvenOdd(arr, size);
    countZeroOnes(arr, size);
}