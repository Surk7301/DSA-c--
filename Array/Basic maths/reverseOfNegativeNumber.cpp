#include <iostream>
using namespace std;

long long int reverseNumber(long long int number){
    
    long long int ans =0;

    while(number != 0){
        long long int digit = number % 10;

        ans = ans * 10 + digit;
        number = number / 10;
    }

    return ans;
}


int main(){
    long long int number = 5335;

    if (number == 0){
        cout << "0" << endl;
    }

    bool flag = 0;
    if(number > 0){
        flag =1;

    }else{
        flag =0;
    }

    number = abs(number);

    long long int ans = reverseNumber(number);

    if (flag == 0){
        ans = 0-ans;
    }

    if(ans>INT_MAX){
        cout << "0" << endl;
    }
    else if(ans<INT_MIN){
        cout << "0" << endl;
    }else{
        cout << ans << endl;

    }

    if (number == ans ){
        cout << "It's a palindrome"<< endl;
    }else{
        cout << " Not a palindrome" << endl;
    }


    

    


}

