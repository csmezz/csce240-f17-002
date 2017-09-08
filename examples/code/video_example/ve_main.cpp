#include <iostream>

using namespace std;

int add(int x, int y);

int main() {
    int x, y;
    cout << "User, please tell me two numbers to add." << endl;
    cin >> x >> y;
    cout << "Adding these two numbers yields: ";
    cout << add(x, y); 
    return 0;
}

int add(int x, int y) {
    return x + y;
}