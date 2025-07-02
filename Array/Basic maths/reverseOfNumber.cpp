#include <iostream>
using namespace std;

int main(){
    int number = 78694;
    int ans =0;

    while(number != 0){
        int digit = number % 10;

        ans = ans * 10 + digit;
        number = number / 10;
    }

    cout << "Reversed number: " << ans << endl;
}