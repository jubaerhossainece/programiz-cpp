#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int number1;
    int number2;
    cout << "enter value for number1 = ";
    cin >> number1;

    cout << "Enter value for number2 = ";
    cin >> number2;

    int sum =add(number1, number2);
    cout << "total = " << sum << endl;
}