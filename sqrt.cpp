#include <iostream>
#include <cmath>
using namespace std;

double squareRoot(double);

int main(){
    double number, result;

    // sqrt() is a library function to calculate the square root
    cout << "Enter a number to get square root:";
    cin >> number;

    result = squareRoot(number);

    cout << result << endl;
}


double squareRoot(double number){
    return sqrt(number);
}