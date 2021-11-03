#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many?: ";
    cin>>n;
    int *nums = new int[n];
    
    for (int j=0; j<n; j++) {
    	cout << "Numbers: ";
    	cin >> nums[j];	
	}

    int max = nums[0];
    for(int i=0; i<n; i++) {
        if(nums[i]>max)
            max = nums[i];
    }
    
    cout << "Largest: " << max;

    return 0;
}
