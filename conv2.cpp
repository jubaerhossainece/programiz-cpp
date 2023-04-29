#include <iostream>
using namespace std;

int main(){
    int int_num;
    double d_num = 3.45;

    //implicit conversion
    //assigning a double number to an integer variable

    int_num = d_num;

    cout << "The integer number is : " << int_num << endl;
    cout << "The doble number is : " << d_num;
    return 0;
}