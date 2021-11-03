#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
    	cout << "Age: ";
        cin >> ages[i];
    };
    
    float min = ages[0];
	for (int j = 0; j < 5; ++j) {
		if (ages[j] < min)
		min = ages[j];
	};
    
    float price;
    float discount;
    
    price = 50;
    price -= (price*min/100);
    
    cout << "Discounted price: " << price << endl;
    
    return 0;
}
