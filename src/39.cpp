#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n * 2 << endl;
    } else {
        cout << n / 2 + 1 << endl;
    }
}
