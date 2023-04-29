#include <iostream>
using namespace std;

int fiboToTerm(int);

int main () {
    cout << "Enter a number upto which to create a fibo series:";
   
    int n;
    cin >> n;

    fiboToTerm(n);

    cout << endl;
}


int fiboToTerm(int n) {
    cout << "fibo series is : ";

    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;

    for (int i = 0; i < n; i++)
    {
        if(i == 0){
            cout << t1;
            continue;
        }

        if(i == 1){
            cout << ", " << t2;
            continue;
        }
        
        nextTerm = t1 + t2;
        cout <<", " << nextTerm;

        t1 = t2;
        t2 = nextTerm;
    }
    
}
