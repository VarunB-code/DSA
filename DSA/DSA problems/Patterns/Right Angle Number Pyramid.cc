// Right Angled pyramid

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i = 1;  
    while (i <= N) {  // Outer loop for rows
        int j = 1;  // Initialize inner loop counter
        while (j <= i) {  // Inner loop for numbers in each row
            cout << j << " ";  // Print the numbers
            ++j;  // Increment inner loop counter
        }
        cout << "\n";  // Move to the next line after printing a row
        ++i;  // Increment outer loop counter
    }

    return 0;
}
