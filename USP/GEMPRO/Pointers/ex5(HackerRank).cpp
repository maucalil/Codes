#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void solve(int *a, int* b);

int main() {

    int a, b;
    cin >> a >> b;

    solve(&a, &b);

    cout << a << "\n" << b << endl;
    return 0;
}

void solve(int *a, int* b) {

    int aux1 = *a, aux2 = *b;

    *a = aux1 + aux2;
    *b = abs(aux1 - aux2);
}