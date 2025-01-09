// consecutive character

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Variable to track the current character
   char ch = 'A';

    // Outer loop for rows
    for (int i = 0; i < N; ++i) {
       
        for (int j = 0; j < N; ++j) {
            cout << ch;  // Print the current character
            ch++;        // Move to the next character
        }
        cout << "\n";  // Move to the next line after each row
    }

    return 0;
}
