//Question 2

/*

*
**
***
****
*****


According to approach 
I- Row = 5
II - connect row to column
0th row - 1 star
1st row - 2 star
2nd row - 3rd star

*/

#include<bits/stdc++.h>
using namespace std;


void print2(int n){
	for(int i =0;i<n;i++) {
		for( int j =0; j<=i; j++){
			cout<<"*"; //make sure in online compiler ( Coding ninja ) use space after star 
			// problem- https://www.naukri.com/code360/problems/n-forest_6570177?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
			
		}
		cout<<endl;
	}
}
	
	int main(){
		int n; //we can write here value of n if we don't need input from user
		cin>>n; //for user input 
		print2(n);	
	}
		
		

		
	
