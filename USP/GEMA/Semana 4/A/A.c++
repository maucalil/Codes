#include <bits/stdc++.h>

using namespace std;

const int disAndar = 4;

main()
{
    int n, h;
    cin >> n >> h;
    int andares[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> andares[i];
    }

    int disTotal{0};

    for (int i = 0; i < n-1; ++i)
    {
        disTotal += disAndar*(abs(andares[i+1] - andares[i]));
    }

    cout << disTotal << endl;
}