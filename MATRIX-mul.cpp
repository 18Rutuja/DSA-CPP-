#include <iostream>
using namespace std;

int main() {
    // Input for matrix A
    int r1, c1;
    cout << "Enter dimensions for matrix A (rows columns): ";
    cin >> r1 >> c1;

    int A[r1][c1];
    cout << "Enter elements for matrix A:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    // Input for matrix B
    int r2, c2;
    cout << "Enter dimensions for matrix B (rows columns): ";
    cin >> r2 >> c2;

    int B[r2][c2];
    cout << "Enter elements for matrix B:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    // Matrix multiplication
    int C[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            int val = 0;
            for (int k = 0; k < c1; k++) {
                val += A[i][k] * B[k][j];
            }
            C[i][j] = val;
        }
    }

    // Output the resultant matrix C
    //2021bec070@sggs.ac.in
    //20/04/2024
    cout << "Resultant matrix C:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
