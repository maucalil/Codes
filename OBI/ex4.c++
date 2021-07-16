#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<char> jogos(6);
    int venceu{0};
    for (int i = 0; i < 6; i++)
    {
        cin >> jogos[i];

        if (jogos[i] == 'V')
        {
            venceu++;
        }
    }

    if (venceu == 5 || venceu == 6) cout << 1 << endl;
    else if (venceu == 3 || venceu == 4) cout << 2 << endl;
    else if (venceu == 1 || venceu == 2) cout << 3 << endl;
    else cout << -1 << endl;

    return 0;
}