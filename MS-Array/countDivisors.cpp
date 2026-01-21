#include<iostream>
using namespace std;

int main(){
    int num =2; 
    int count =0;
    if(num ==1 ){
        count = 1;
    }else{
for(int i=1; i<=num; i++){
        if(num%i ==0){
            count++;
        }
    }
    }
    
    cout<< "Count: " << count << endl;

    return count;
    
}