#include<iostream>
using namespace std;

int main(){
    int num = 1634;

    int num2 =0;
    int count =0;
    int temp = num;

    while(temp>0){
        temp /= 10;
        count++;
    }

    // step 3
    temp =num;
    while(temp > 0){
        int digit = temp %10;
        num2 = num2 + pow(digit, count);
        temp /=10;

    }

    if(num == num2)
        cout << "Yes, It's a narcisstic number";
    else
        cout << "No, It's not an narcisstic number";

}