#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int *ptrA = &a, *ptrB = &b;

    cout << "O valor de a = " << a << " está no endereço " << ptrA << endl;
    cout << "O valor de b = " << b << " está no endereço " << ptrB << endl;

    return 0;
}