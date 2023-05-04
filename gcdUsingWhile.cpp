#include <iostream>
using namespace std;

int gcdUsingWhile(int, int);

int main(){
    cout << "Enter number1:";
    int n1;
    cin >> n1;
    cout << "Enter number2:";
    int n2;
    cin >> n2;

    int gcd;
  
    gcd = gcdUsingWhile(n1, n2);

    cout << "GCD is : " << gcd << endl;
}

int gcdUsingWhile(int n1, int n2){

    int mod;
    int gcd = 1;
    if (n1 > n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    while(n1 > 1){

        mod = n2 % n1;

        if(mod == 0){
            gcd = n1;
            break;
        }

        n1 = mod;
        n2 = n1;
    }

    return gcd;
}