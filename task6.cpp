#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter an integer
    cout << "Enter an integer: ";
    cin >> n;

    // Loop from 1 to n and display the cube of each number
    for (int i = 1; i <= n; i++) {
        cout << "Cube of " << i << " is: " << i * i * i << endl;
    }

    return 0;
}
