#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Prompt the user to enter the value of n
    cout << "Enter a positive integer: ";
    cin >> n;

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
