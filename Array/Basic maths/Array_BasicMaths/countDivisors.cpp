#include <iostream>
using namespace std;

int main(){
    int num =56;
    if (num == 1) return 1;
    int count = 2;
    for(int i=2; i<num; i++){
        if (num%i==0){
            count++;
        }

    }
    cout<< count;
}