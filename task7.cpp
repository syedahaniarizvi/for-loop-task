#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    float marks;

    // Prompt the user to enter the total number of subjects
    cout << "Enter the total number of subjects: ";
    cin >> numSubjects;

    // Loop to enter marks for each subject and classify them into grades
    for (int i = 1; i <= numSubjects; i++) {
        cout << "Enter marks for subject " << i << " (out of 100): ";
        cin >> marks;

        // Classify the marks into grades
        if (marks >= 90) {
            cout << "Grade: A" << endl;
        } else if (marks >= 75) {
            cout << "Grade: B" << endl;
        } else if (marks >= 50) {
            cout << "Grade: C" << endl;
        } else {
            cout << "Grade: F" << endl;
        }
    }

    return 0;
}
