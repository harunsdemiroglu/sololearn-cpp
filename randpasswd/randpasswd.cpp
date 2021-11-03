#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    for (int i = 0; i < 16; i++) {
        cout << (rand() % 9);
    }
        
    return 0;
}

