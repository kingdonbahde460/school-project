#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 > num2) {
        cout << "The larger number is: " << num1 << endl;
    } else {
        cout << "The larger number is: " << num2 << endl;
    }
    
    return 0;
}
