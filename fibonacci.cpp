#include <iostream>
using namespace std;

int main() {
    int n, n1 = 0, n2 = 1, n3;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << n1 << " ";      
        n3 = n1 + n2;     
        n1 = n2;            
        n2 = n3;
    }

    cout << endl;
    return 0;
}
