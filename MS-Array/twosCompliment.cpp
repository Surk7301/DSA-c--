#include <iostream>
using namespace std;

int main(){

    int num = 10;
    int ones_comp = ~num;
    int twos_comp = ones_comp + 1;

    cout << "Two's compliment: " << twos_comp << endl;
}