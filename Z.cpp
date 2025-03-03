#include <iostream>
using namespace std;

int main() {
    cout << "******" << endl;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5 - i; j++) {
            if (j == 5 - i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "******" << endl;
    
    return 0;
}
