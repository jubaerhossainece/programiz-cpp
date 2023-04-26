#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    // nested for loops;

    // first loop

    for (int i = 1; i < 4; i++)
    {
        //second loop
        for (int j = 1; j < 4; j++)
        {
            if(i == 2){
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
        
    }
    
}