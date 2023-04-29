#include <iostream>
using namespace std;

int fiboSeries(int);

int main()
{
    int n;
    cout << "Enter a number to get fibo series:";
    cin >> n;

    fiboSeries(n);
    cout << endl;
}

/** 
 * function to generate a fibonacci series up to a certain number
 * int n
 * return 0
*/
int fiboSeries(int n){

    int first = 0;
    int second = 1;
    int sum = 0;

    cout << "Fibonacci series is:";

    do{
        if(sum == 0){
            cout << first << " " << second << " ";
        }else{
            cout << sum << " ";
            first = second;
            second = sum;
        }
        sum = first + second;

    } while (sum <= n);

    return 0;
}