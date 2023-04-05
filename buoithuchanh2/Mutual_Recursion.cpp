#include <iostream>
using namespace std;

// forward declarations of functions
int even(int);
int odd(int);

// function to check if a number is even
int even(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return odd(n - 1);
    }
}

// function to check if a number is odd
int odd(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return even(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (even(n)) {
        cout << n << " is even" << endl;
    }
    else {
        cout << n << " is odd" << endl;
    }
    return 0;
}
