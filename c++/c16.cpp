#include <iostream>
using namespace std;

int main() {
   
    int matrix1[2][2], matrix2[2][2], sum[2][2];

     
    cout << "Enter the elements for the first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

 
    cout << "Enter the elements for the second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix2[i][j];
        }
    }

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

   
    cout << "\nSum of the two matrices is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

