#include <iostream>
using namespace std;

// declare a function to display marks
// take a 1d array as parameter
int display(int marks[5]){
    cout << "Displaying marks:" << endl;

    //display array elements
    int size = sizeof(marks);

    for (int i = 0; i < size; i++)
    {
        cout << "Marks: " << marks[i] << endl;
    }
    return 0;
}

int main(){
    int a[5] = {23,45,67,78,66};

    display(a);
}