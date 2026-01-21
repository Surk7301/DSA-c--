#include<iostream>
using namespace std;

int main(){
    int num =0;
    if(num ==0 || num == 1)
    cout <<"Factorial: " << "1"<<endl;
    int ans =1;

    while(num>=1){
        ans *= num;
        num--;
    }

    cout <<"Factorial: " << ans<<endl;
}