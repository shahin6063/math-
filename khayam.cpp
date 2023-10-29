#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Initializing the first row
    int prev = 1;
    cout << prev << endl;

    // Loop for generating the next rows
    for (int i = 2; i <= n; i++) {
        // Printing the first element of each row
        cout << "1 ";

        // Loop for generating the middle elements of each row
        for (int j = 1; j <= i - 2; j++) {
            int curr = prev * (i - j) / j;
            cout << curr << " ";
            prev = curr;
        }

        // Printing the last element of each row
        cout << "1" << endl;
        prev = 1;
    }

    return 0;
}