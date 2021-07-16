#include <bits/stdc++.h>

using namespace std;

main()
{
    string s;
    cin >> s;

    int saldo{0};
    bool ans = true;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(') saldo++;
        else saldo--;

        if (saldo < 0)
        {
            ans = false;
            break;
        }
    }

    if (saldo != 0)
    {
        ans = false;
    }

    if (ans) cout << "YES\n";
    else cout << "NO\n";
}