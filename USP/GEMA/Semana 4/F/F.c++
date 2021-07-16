#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; // votos totais
    cin >> n;

    map<string, int> votos;
    set<string> quem;

    for (int i = 0; i < n; ++i)
    {
        string pessoa;
        string dia;
        cin >> pessoa >> dia;

        if (quem.count(pessoa) == 0)
        {
            votos[dia]++;
            quem.insert(pessoa);
        }
    }

    int v_quarta = votos["quarta"];
    int v_sexta = votos["sexta"];

    if  (v_quarta > v_sexta) cout << "quarta" << endl;
    else if (v_quarta < v_sexta) cout << "sexta" << endl;
    else cout << "empate" << endl;


}