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

int main() {
	
    int n;
	cout << "Enter an integer: ";
    cin>>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome" << endl;
    }
    else {
        cout <<n<<" is not a palindrome" << endl;
    }
    
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
	}
}



