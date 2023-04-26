#include <iostream>
#include <cmath>
using namespace std;

void primeNumber();

int main(){
    primeNumber();
    return 0;
}

void primeNumber(){
    int number, flag;
    cout << "Enter a number to check: ";
    cin >> number ;

    for (int i = 2; i <= number/2; i++)
    {
        if(number % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout << number << " is not a prime number." << endl;
    }else{
        cout << number << " is a prime number." << endl;
    }
    
}