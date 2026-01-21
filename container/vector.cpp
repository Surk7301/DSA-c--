#include <iostream>
using namespace std;

int main(){
    vector<int> marks;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout<< *(marks.begin()) << endl;

    cout << marks.back() << endl;
    cout << marks.front()<< endl;
    cout << "Size: " << marks.size()<< endl;

    if (marks.empty()){
        cout << "Vector is empty" << endl;
    }else{
        cout<<"vector is not empty" << endl;
    }
}