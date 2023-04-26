#include <iostream>
using namespace std;

int num;

int& test(){
    num=3;
    return num;
}

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;

    test() = n;

    cout << num << endl;

    cout << test() << endl;
    cout << &n << endl;
    cout << &num << endl;
}

