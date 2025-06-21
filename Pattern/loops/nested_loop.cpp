#include <iostream>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        cout << "Outer loop iteration: " << i << endl;
        for(char j =0; j<=3; j++){
            cout <<" Inner loop iteration: " << j << endl;
        }
    }
} 