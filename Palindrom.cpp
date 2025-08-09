#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num; // to store original number

    while (num > 0) {
        int digit = num % 10;         //  to get last digit
        reversed = reversed * 10 + digit; // to build reversed number
        num /= 10;                    //  to remove last digit
    }

    if (original == reversed)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
