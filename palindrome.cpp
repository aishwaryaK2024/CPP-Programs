#include <iostream>
using namespace std;

int main() {
    int num, original, r = 0, d;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while (num > 0) {
        d = num % 10;
        r = r * 10 + d;
        num /= 10;
    }
    if (original == r)
        cout << original << " is a Palindrome." << endl;
    else
        cout << original << " is NOT a Palindrome." << endl;

    return 0;
}
