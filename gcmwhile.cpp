#include <iostream>
using namespace std;

int gcmUsingWhile(int, int);

int main(){
    cout << "Enter number1:";
    int n1;
    cin >> n1;
    cout << "Enter number2:";
    int n2;
    cin >> n2;

    int gcm = gcmUsingWhile(n1, n2);
    cout << gcm << endl;
}

int gcmUsingWhile(int n1, int n2){
    if(n1 > n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    int gcm = 1;

    while (n1 > 0)
    {
        int mod = n2 % n1;

        if(mod == 0){
            return n1;
        }

        n2 = n1;
        n1 = mod;
    }

    return gcm;
    
}