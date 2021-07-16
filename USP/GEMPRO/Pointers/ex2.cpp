#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cout << "Digite a quantidades de valores: ";
    cin >> n;

    double num[n];

    cout << "Digite os valores de cada elemento: ";
    for (int i = 0; i < n; i++) {
        int x; 
        cin >> num[i];
    }

    double max = num[0];
    for (int i = 0; i < n; i++) {
        if(num[i] > max)
        {
            max = num[i];
        }
    }

    double *p = &max;
    cout << "O endereço do maior valor ("<< max << ") do vetor é " << p << endl;   

    return 0;
}