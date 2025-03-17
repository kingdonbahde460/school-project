
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "Hello, " + name + ", you are " + to_string(age) + " years old." << endl;
    return 0;
}