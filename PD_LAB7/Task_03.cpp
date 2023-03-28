#include <iostream>
void upperpart(int rows);
void lowerpart(int rows);
using namespace std;
main() {
    int rows;
    cout<<"Enter number of rows: ";
    cin >> rows;
    int nrows = rows/2;
    upperpart(nrows);
    lowerpart(nrows);

}
void upperpart(int rows) {
    for (int count = 1 ; count <= rows; count ++){
        for (int space = 1; space <= rows - count; space++) {
            cout<<" ";
        }
        for (int asterick = 1; asterick <= count; asterick++){
            cout<<"*";
        }
        cout<<endl;
    }

}
void lowerpart(int rows) { 
    for (int count = 0; count <= rows; count = count + 1){

        for (int space = 1; space <= count; space++) {
            cout<<" ";

        }

        for (int asterick = 1; asterick <= rows - count; asterick = asterick + 1) {
            
            cout<<"*";
        }
        cout<<endl;
        
    }

}