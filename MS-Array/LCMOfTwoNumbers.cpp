#include<iostream>
using namespace std;
int findGCD(int a, int b){
    while (a!=b){
        if(a==b)
            break;
        else if(a>b)
            a=a-b;
        else
            b=b-a;

    }
 return a;
 return b;
}

int main(){
    int a = 28;
    int b = 35;

    int gcd = findGCD(a, b);
    int lcm = (a*b) /gcd;

    cout << "LCM :" << lcm << endl;

}