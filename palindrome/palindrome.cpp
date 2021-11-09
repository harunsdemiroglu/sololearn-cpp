#include <iostream>
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

int test(); 

int main() {
    int n;
	cout << "Enter an integer: ";

    while (!(cin >> n)) {
    	cout << "Error: Invalid character." << endl;
    	cin.clear();
    	cin.ignore(123, '\n');
    	return main();
	}
	if (n < 10) {
    	cout << "Please enter 2 digit integer." << endl;
    	return main();
	} 
	else { 
		if (isPalindrome(n)) {
        	cout <<n<<" is a palindrome" << endl;
    	}
    	else {
        	cout <<n<<" is not a palindrome" << endl;
    	}
    	return test();
	}
    return test();
}

int test() {
    char c;
    cout << "Terminate?(y/n): ";
    cin>>c;
    char terminate = c;
    
    switch (terminate) {	
    	case 'y':{
    		return 0;
			break;
		}
		case 'n':{
			return main();
			break;
		}
		default:{
			cout << "Please enter valid answer. (y/n): " << endl;
			return test();
			break;
		}
	}
	return main();
}
