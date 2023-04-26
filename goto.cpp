#include <iostream>
using namespace std;

int main() {
    int num = 1;
    int sum = 0;

    do{
        if(sum == 0){
            cout << "Starting .." << endl;
        }else{
            if(num == 3){
                goto action;
            }
            cout << "value of num = " << num << endl;
            cout << "sum is = " << sum << endl;
        }
        sum += num;
        num++;
    }while(sum  < 11);


    action:
    cout << "Jumping from goto" << endl;
}