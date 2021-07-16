#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1005;

int n, m;
char mapa[MAXN][MAXN];
bool inimigo[MAXN][MAXN];

void percorre_linha(int i, int j, int dx)
{
    for ( ; j >= 0 && j < m; j += dx)
    {
        if (mapa[i][j] == '#')
        {
            break;
        }

        inimigo[i][j] == true;
    }
}

void percorre_coluna(int i, int j, int dy)
{
    for ( ; i >= 0 && i < n; i += dy)
    {
        if (mapa[i][j] == '#')
        {
            break;
        }

        inimigo[i][j] == true;
    }
}

main()
{
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mapa[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (mapa[i][j] == 'D')
            {
                percorre_coluna(i, j, 1);
            }
            else if (mapa[i][j] == 'U')
            {
                percorre_coluna(i, j, -1);
            }
            else if (mapa[i][j] == 'L')
            {
                percorre_linha(i, j, -1);
            }
            else if (mapa[i][j] == 'R')
            {
                percorre_linha(i, j, 1);
            }
        }
    }

    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mapa[i][j] == '.' && inimigo[i][j] == false)
            {
                cout << "FILHA DA PUTA" << endl;
                pos++;
            }
        }
    }

    if (pos == 0)
    {
        cout << "NO SOLUTION" << endl;
    } 
    else if (pos == 1)
    { 
        cout << "ONLY ONE SOLUTION" << endl;
    }
    else 
    {
        cout << "MULTIPLE SOLUTIONS" << endl;
    }
}