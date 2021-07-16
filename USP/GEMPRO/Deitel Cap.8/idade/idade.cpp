#include <bits/stdc++.h>

using namespace std;


int main() 
{
    int m; // idade da dona Mônica
    cin >> m;

    int a; // idade de um dos filhos
    cin >> a;

    int b; // idade do outro filho
    cin >> b;

    int c = m - a - b; // idade do mais velho
    int maisVelho{0};
    if (a > b && a > c)
    {
        maisVelho = a;
    }
    else if (b > a && b > c)
    {
        maisVelho = b;
    }
    else
    {
        maisVelho = c;
    }

    cout << maisVelho  <<endl;

    return 0;
}