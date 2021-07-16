#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int p;
    cin >> p;

    if (p == 2) {
        cout << 0 << endl;
    }
    else {

        p -= 1;
        p /= 2;

        cout << 1 << "\n";
        cout << p+1 << " " << p << endl;
    }

    return 0;
}