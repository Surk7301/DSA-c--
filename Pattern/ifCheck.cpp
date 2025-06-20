#include <iostream>
using namespace std;

int score = 350;
int marks;
int main(){
    // if(score>300){
    //     cout << "India wins the match!" << endl;

    // }else{
    //         cout << "India lost the match" << endl;

    // }

    cout << "Enter your marks: ";
    cin >> marks;
    if(marks >= 90){
        cout << "Grade A" << endl;
    }else if(marks >= 80){
        cout << "Grade B" << endl;
    }else if(marks >= 70){
        cout << "Grade C" << endl;
    }else if(marks >= 60){
        cout << "Grade D" << endl;
    }else if(marks >= 50){
        cout << "Grade E" << endl;
    }else{
        cout << "Grade F" << endl;
    }
}