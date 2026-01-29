#include<iostream>
using namespace std;

int main(){
    int a = 28;
    int b = 35;

    while (a!=b){
        if(a==b)
            break;
        else if(a>b)
            a=a-b;
        else
            b=b-a;

    }

    cout << "GCD is : " << a << " * " << b<<endl;


}