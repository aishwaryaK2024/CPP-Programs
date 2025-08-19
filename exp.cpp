#include <NTL/mat_ZZ.h>
#include <NTL/ZZ.h>
#include <NTL/vec_ZZ.h>
#include <iostream>
#include <ctime>
#include <chrono>//for timing

using namespace std;
using namespace NTL;
using namespace std::chrono; 

int main() {
    // Initialize random seed

    SetSeed(conv<ZZ>(time(0)));  // Seed with current time
    int r1,c1,r2,c2,c=1;
    int n = 20;
    int rows = 20;
    int cols = 20;

    mat_ZZ A;
    A.SetDims(rows, cols);  // Set matrix size to 20x20

    // Fill matrix with random integers in a certain range
    ZZ maxValue = conv<ZZ>(100);  // Random integers between 0 and 99


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            A[i][j] = RandomBnd(maxValue);  // random number in [0, maxValue-1]
        }
    }


    // Print the matrix
    cout << "Random 20x20 matrix:\n";
    cout << A << endl;

    auto start = high_resolution_clock::now();


    for (r1 = 0; r1 < n; ++r1) {
        for (r2 = r1 + 1; r2 < n; ++r2) {
            for (c1 = 0; c1 < n; ++c1) {
                for (c2 = c1 + 1; c2 < n; ++c2) {
                    mat_ZZ M;
                    M.SetDims(2, 2);
                    M[0][0] = A[r1][c1];
                    M[0][1] = A[r1][c2];
                    M[1][0] = A[r2][c1];
                    M[1][1] = A[r2][c2];
                    cout<<c<<"\n";
                    cout << M << endl;
                    c++;

                }
            }
        }
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return 0;
}
