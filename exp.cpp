#include <NTL/ZZ.h>
#include <NTL/mat_ZZ.h>
#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;
using namespace NTL;
using namespace chrono;

void find_3x3_minors(const mat_ZZ& A) {
    auto start = high_resolution_clock::now();
    ofstream output("minors_3x3.txt");
    int count = 0;
    
    for (int r1 = 0; r1 < 18; r1++) {
        for (int r2 = r1 + 1; r2 < 19; r2++) {
            for (int r3 = r2 + 1; r3 < 20; r3++) {
                for (int c1 = 0; c1 < 18; c1++) {
                    for (int c2 = c1 + 1; c2 < 19; c2++) {
                        for (int c3 = c2 + 1; c3 < 20; c3++) {
                            output << A[r1][c1] << " " << A[r1][c2] << " " << A[r1][c3] << "\n";
                            output << A[r2][c1] << " " << A[r2][c2] << " " << A[r2][c3] << "\n";
                            output << A[r3][c1] << " " << A[r3][c2] << " " << A[r3][c3] << "\n";
                            output << "----\n";
                            count++;
                        }
                    }
                }
            }
        }
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    output.close();
    
    cout << "3x3 minors: " << count << " found" << endl;
    cout << "Time: " << duration.count() << " milliseconds" << endl;
    cout << "Saved to: minors_3x3.txt" << endl;
    cout << endl;
}

void find_4x4_minors(const mat_ZZ& A) {
    auto start = high_resolution_clock::now();
    ofstream output("minors_4x4.txt");
    int count = 0;
    
    for (int r1 = 0; r1 < 17; r1++) {
        for (int r2 = r1 + 1; r2 < 18; r2++) {
            for (int r3 = r2 + 1; r3 < 19; r3++) {
                for (int r4 = r3 + 1; r4 < 20; r4++) {
                    for (int c1 = 0; c1 < 17; c1++) {
                        for (int c2 = c1 + 1; c2 < 18; c2++) {
                            for (int c3 = c2 + 1; c3 < 19; c3++) {
                                for (int c4 = c3 + 1; c4 < 20; c4++) {
                                    output << A[r1][c1] << " " << A[r1][c2] << " " << A[r1][c3] << " " << A[r1][c4] << "\n";
                                    output << A[r2][c1] << " " << A[r2][c2] << " " << A[r2][c3] << " " << A[r2][c4] << "\n";
                                    output << A[r3][c1] << " " << A[r3][c2] << " " << A[r3][c3] << " " << A[r3][c4] << "\n";
                                    output << A[r4][c1] << " " << A[r4][c2] << " " << A[r4][c3] << " " << A[r4][c4] << "\n";
                                    output << "----\n";
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    output.close();
    
    cout << "4x4 minors: " << count << " found" << endl;
    cout << "Time: " << duration.count() << " milliseconds" << endl;
    cout << "Saved to: minors_4x4.txt" << endl;
    cout << endl;
}

void find_5x5_minors(const mat_ZZ& A) {
    auto start = high_resolution_clock::now();
    ofstream output("minors_5x5.txt");
    int count = 0;
    
    for (int r1 = 0; r1 < 16; r1++) {
        for (int r2 = r1 + 1; r2 < 17; r2++) {
            for (int r3 = r2 + 1; r3 < 18; r3++) {
                for (int r4 = r3 + 1; r4 < 19; r4++) {
                    for (int r5 = r4 + 1; r5 < 20; r5++) {
                        for (int c1 = 0; c1 < 16; c1++) {
                            for (int c2 = c1 + 1; c2 < 17; c2++) {
                                for (int c3 = c2 + 1; c3 < 18; c3++) {
                                    for (int c4 = c3 + 1; c4 < 19; c4++) {
                                        for (int c5 = c4 + 1; c5 < 20; c5++) {
                                            output << A[r1][c1] << " " << A[r1][c2] << " " << A[r1][c3] << " " << A[r1][c4] << " " << A[r1][c5] << "\n";
                                            output << A[r2][c1] << " " << A[r2][c2] << " " << A[r2][c3] << " " << A[r2][c4] << " " << A[r2][c5] << "\n";
                                            output << A[r3][c1] << " " << A[r3][c2] << " " << A[r3][c3] << " " << A[r3][c4] << " " << A[r3][c5] << "\n";
                                            output << A[r4][c1] << " " << A[r4][c2] << " " << A[r4][c3] << " " << A[r4][c4] << " " << A[r4][c5] << "\n";
                                            output << A[r5][c1] << " " << A[r5][c2] << " " << A[r5][c3] << " " << A[r5][c4] << " " << A[r5][c5] << "\n";
                                            output << "----\n";
                                            count++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    output.close();
    
    cout << "5x5 minors: " << count << " found" << endl;
    cout << "Time: " << duration.count() << " milliseconds" << endl;
    cout << "Saved to: minors_5x5.txt" << endl;
    cout << endl;
}

int main() {
    // Read matrix from file
    ifstream input("input_matrix.txt");
    mat_ZZ A;
    A.SetDims(20, 20);
    
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            input >> A[i][j];
    input.close();

    cout << "Finding minors for 20x20 matrix..." << endl;
    cout << "==================================" << endl;
    
    // Find minors of different sizes
    find_3x3_minors(A);
    find_4x4_minors(A);
    find_5x5_minors(A);

    return 0;
}
// #include <NTL/mat_ZZ.h>
// #include <NTL/ZZ.h>
// #include <NTL/vec_ZZ.h>
// #include <iostream>
// #include <ctime>
// #include <chrono>//for timing

// using namespace std;
// using namespace NTL;
// using namespace std::chrono; 

// int main() {
//     // Initialize random seed

//     SetSeed(conv<ZZ>(time(0)));  // Seed with current time
//     int r1,c1,r2,c2,c=1;
//     int n = 20;
//     int rows = 20;
//     int cols = 20;

//     mat_ZZ A;
//     A.SetDims(rows, cols);  // Set matrix size to 20x20

//     // Fill matrix with random integers in a certain range
//     ZZ maxValue = conv<ZZ>(100);  // Random integers between 0 and 99


//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             A[i][j] = RandomBnd(maxValue);  // random number in [0, maxValue-1]
//         }
//     }

//     // Print the matrix
//     cout << "Random 20x20 matrix:\n";
//     cout << A << endl;

//     auto start = high_resolution_clock::now();
//     for (r1 = 0; r1 < n; ++r1) {
//         for (r2 = r1 + 1; r2 < n; ++r2) {
//             for (c1 = 0; c1 < n; ++c1) {
//                 for (c2 = c1 + 1; c2 < n; ++c2) {
//                     mat_ZZ M;
//                     M.SetDims(2, 2);
//                     M[0][0] = A[r1][c1];
//                     M[0][1] = A[r1][c2];
//                     M[1][0] = A[r2][c1];
//                     M[1][1] = A[r2][c2];
//                     cout<<c<<"\n";
//                     cout << M << endl;
//                     c++;

//                 }
//             }
//         }
//     }
//     return 0;
// }
