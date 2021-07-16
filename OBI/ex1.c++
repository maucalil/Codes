#include <bits/stdc++.h>

using namespace std;


int main()
{

    vector<int> count(4, 0);
    string cartas;
    getline(cin, cartas);
    string filtro= "CEUP";

    for (int i = 2; i < cartas.size(); i += 3)
    {
        for (int j = 0; j < filtro.size(); j++)
        {
            if (cartas[i] == filtro[j])
            {
                count[j]++;
            }
        }
    }

    for (int k = 0; k < filtro.size(); k++)
    {
        vector<int> vezes(4,0);

        for (int i = 2; i < cartas.size(); i += 3)
        { 
            if (cartas[i] == filtro[k])
            {
                for (int j = i+3; j < cartas.size(); j +=3)
                {
                    if(cartas[i-2]==cartas[j-2] && cartas[i-1]==cartas[j-1] && cartas[i]==cartas[j])
                    {
                        vezes[k]++;
                    }
                }
            }
        }   

        if (vezes[k] > 0) cout << "error" << endl;
        else cout << 13 - count[k] << endl;;
    }

    return 0;
}