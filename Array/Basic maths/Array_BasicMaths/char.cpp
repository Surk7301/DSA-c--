#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout << "Enter value on n (Number of input max(10))"<< endl;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cout <<"Taking input for index " <<  i << endl;
        cin >> arr[i];
    }

    for(int i =0; i<n; i++){
        cout << arr[i] << ",";
    }
    cout << endl;



}