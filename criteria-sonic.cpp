#include <iostream>
using namespace std;
int main() {
    double gpa;

    // Get GPA from user
    cout << "Enter your GPA: ";
    cin >> gpa;

    // Check if qualified to join SONiC team
    if (gpa >= 3.00) {
        cout << "Congratulations! You are qualified to join the SONiC team." << endl;
    } else {
        cout << "Sorry, you are not qualified to join the SONiC team." << endl;
    }

    return 0;
}
