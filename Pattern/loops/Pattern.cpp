#include <iostream>
using namespace std;

int main()
{
    int n;

    // Square Pattern(n);
    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Rectangle Pattern(n);
    // for (int i = 1; i <= 3; i++)
    // {

    //     for (int j = 0; j <= n; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // Hollow Square Pattern(n);
    // for(int i=0; i<5; i++){
        
    //     for(int j=0; j<5; j++){
    //         if(i==0 || i==4){
    //             cout << "* ";
    //         }else{
    //             if(j==0 || j==4){
    //                 cout << "* ";
    //             }else{
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout<< endl;
    // }


    //half Pyramid Pattern(n);
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // for(int row =0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Inverted Half Pyramid Pattern(n);
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Half Pyramid with Numbers Pattern(n);
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout << col+1 << " ";
    //     }
    //     cout << endl;
    // }

    // Inverted Half Pyramid with Numbers Pattern(n);
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout << col+1 << " ";
        }
        cout << endl;
    }
}