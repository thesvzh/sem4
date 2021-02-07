#include <iostream>
using namespace std;
float x,y;
int n,k;
//--//
const int a=4,b=6;
//--//
int year;
int main (){
    cin >> x;
    cin >> y;
    if (x+y>=10){
        if (x+y<=20){
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
    }
    else {
        cout << "false" << endl;
    }

cout << "--------------" << endl;
//------------------------------------//
    cin >> n;
    k=0;
    if (n > 1){
        for (int i=2; i<n; i++){ // 2->n-1
            if (n % i == 0){
                cout << "false" << endl;
                k=1;
                break;
            }
        }
        if (k==0) {
            cout << "true" << endl;
        }
    }
    else{
        cout << "false" << endl;
    }

cout << "--------------" << endl;
//------------------------------------//

    if (a+b==10){
        cout << "true" << endl;
    }
    else if (a==10){
        cout << "true" << endl;
    }
    else if (b==10){
        cout << "true" << endl;
    }

cout << "--------------" << endl;
//------------------------------------//
    cin >> year;
    if (year%400==0){
        cout << "високосный" << endl;
    }
    else {
        if (year%4==0){
            if (year%100==0){
                cout << "невисокосный" << endl;
            }
            else {
                cout << "високосный" << endl;
            }
        }
    }

    return 0;
}
