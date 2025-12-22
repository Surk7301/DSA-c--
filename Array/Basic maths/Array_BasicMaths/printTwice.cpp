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

int main(){
    int arr[10] = {11,12,13,14,15};
    int size = 5;

    printTwice(arr, size);
    printEvenOdd(arr, size);
}