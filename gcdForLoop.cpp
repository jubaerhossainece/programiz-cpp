#include <iostream>
using namespace std;

int gcdUsingFor(int, int);

int main(){
    cout << "Enter number1:";
    int n1, n2;

    cin >> n1;
    cout << "enter number 2:";
    cin >> n2;

    int gcd = gcdUsingFor(n1,n2);
    cout << "gcd: " << gcd << endl;
}

int gcdUsingFor(int n1, int n2){
    int gcd;

    if(n1 > n2){
        int flag = n1;
        n1 = n2;
        n2 = flag;
    }

    for (int i = 1; i <= n1; i++)
    {
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }

    return gcd;
}