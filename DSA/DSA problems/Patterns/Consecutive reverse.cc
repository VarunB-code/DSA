/*

ABC
BCD
CDE


  */

#include <iostream>
using namespace std;

int main() {
    int N; 
	 cin>>N;

    
    for (int i = 0; i < N; ++i) {
        char ch = 'A' + i;  
        
        // Inner loop for columns
        for (int j = 0; j < N; ++j) {
            cout << ch;  
            ch++;        
        }
        
        cout << "\n";  
    }

    return 0;
}
