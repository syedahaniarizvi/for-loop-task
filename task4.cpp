#include <iostream>
using namespace std;

int main() {
    // Loop through numbers from 1 to 20
    for (int i = 1; i <= 20; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
