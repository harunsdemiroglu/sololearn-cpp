#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) {
	
    int a, reversed=0, b;  
    a = x;
    while (a != 0) {
    	b = a % 10;
    	reversed = reversed*10+b;
    	a/=10;
	}
	bool isPalindrome = (x == reversed);
}

int main() {
	string st = "y, n";
	cout << "Start?(y/n): " ;
	cin >> st;
	
	while (st == "y" && st != "n"){
	    int n;
		cout << "Enter an integer: ";
	
	    while (!(cin >> n)) {
	    	cout << "Error: Invalid character." << endl;
	    	cout << "Enter an integer: ";
	    	cin.clear();
	    	cin.ignore(123, '\n');
		}
		if (n < 10) {
	    	cout << "Please enter 2 digit integer." << endl;
		} 
		else { 
			if (isPalindrome(n)) {
	        	cout <<n<<" is a palindrome" << endl;
	    	}
	    	else {
	        	cout <<n<<" is not a palindrome" << endl;
	    	}
	    	cout << "Continue?(y/n): ";
	    	cin >> st;
		}
	}
	return 0;
}


