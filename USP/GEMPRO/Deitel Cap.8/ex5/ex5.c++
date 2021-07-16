#include <bits/stdc++.h>

using namespace std;


int main() 
{
    int primo, div{0};
    cin >> primo;
    int* primoPtr{&primo};

    for ( int i = 2; i <= ((*primoPtr)/2); ++i)
    {
        if ((*primoPtr) % i == 0)
        {
            div++;
        }
    }

    if (div == 0)
    {
        cout << primo << " é primo." << endl;
    }
    else
    {
        cout << primo << " não é primo." << endl;
    }
}