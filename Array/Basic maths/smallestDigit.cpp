#include<iostream>
#include<limits.h>
using namespace std;


int main(){
    int smallest = INT_MAX;
    int num = 3451;

    while (num !=0){
        int digit = num %10;
        // if(digit<smallest){
        //     smallest=digit;

        // }
        smallest = min(digit, smallest); // this line == 12 - 15 
        num=num/10;
    }
    cout << "Smallest digit: " << smallest << endl;
    return smallest;
}