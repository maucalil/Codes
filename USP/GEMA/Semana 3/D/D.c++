#include <bits/stdc++.h>

using namespace std;
 
int v[100005];

// retorna o índice do primeiro cara >= x
int solve(int x, int n)
{
    int l = 0, r = n;

    while(l < r)
    {
        int m = (l + r) / 2;

        if(v[m] >= x)
        {
            // resposta está entre l e m
            r = m;
        }
        else
        {
            // resposta entre m+1 e r
            l = m + 1;
        }
    }
    return l;
}

int main()
{
    int n; // tamanho do vetor
    int m; // quantidade de queries
    cin >> n >> m;

 
    for ( int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    v[n] = INT_MAX; // infinito

    for ( int j = 0; j < m; ++j)
    {
        int x;
        cin >> x;

        // v[id] >= x
        int id = solve (x,n);
        // ultimo cara < x
        int id2 = id - 1;

        if (id2 >= 0 && abs(v[id] - x) >= abs(v[id2] - x))
        {
            cout << v[id2] << "\n";
        }
        else
        {
            cout << v[id] << "\n";
        }
    }
    return 0;
}