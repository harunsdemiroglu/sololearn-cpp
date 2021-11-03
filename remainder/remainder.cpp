#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Countdown starts with: ";
    cin >> n;
    int m;
    cout << "Divide with: ";
    cin >> m;

do {
	int k = n % m;
	cout << n << " " << m << " " << k << endl;
    n = n - 1;
}

while (n >= 1);

    return 0;
}
