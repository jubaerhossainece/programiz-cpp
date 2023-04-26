#include <iostream>
using namespace std;

void display(char = '*', int = 5);

int main(){
    int count = 3;

    display();

    display('d', count);

    display('f');
}

void display(char ch, int num){
    for (int i = 0; i < num; i++)
    {
        cout << ch;
    }
    cout << endl;
}