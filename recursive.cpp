#include <iostream>
using namespace std;

int factorial(int);

int main(){
    int n;

    cout << "enter a number to calculate the factorial: ";
    cin >> n;

    int rec = factorial(n);

    cout << "Factorial is : " << rec << endl;
}

int factorial(int n){

    if(n > 1){
        return n*factorial(n-1);
    }else{
        return 1;
    }
}