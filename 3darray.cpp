#include <iostream>
using namespace std;

int main(){
    // this array can store upto 12 elements (2x3x2)
    int test[2][3][2] = {
        {
            {1,2},
            {2,3},
            {4,5}
        },
        {
            {5,3},
            {9,11},
            {34,5}
        }
    };

    // displaying the values with proper index
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "test["<< i <<"]["<<j <<"]["<<k <<"]="<< test[i][j][k] << endl;
            }
            
        }
        
    }
    
}