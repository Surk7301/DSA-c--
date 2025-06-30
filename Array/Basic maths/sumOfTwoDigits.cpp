#include <iostream>
using namespace std;

int main(){
    int num = 4567;

    int sum = 0;
    while (num !=0)
    {
        int digit =num%10;
        sum = sum + digit;
        num = num/10;
    }
    return sum;
     cout << "Sum of digits: " << sum << endl;
    
}