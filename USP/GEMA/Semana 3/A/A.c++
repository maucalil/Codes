#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, m, indexN{0}, indexM{0}; // linhas e colunas da matriz, respectivamente
                                    // e index de cada linha e coluna

    cin >> n >> m; // pede os valores de n e m

    int matriz[n][m];

    for ( int i = 0; i < n; ++i )
    {
        for ( int j = 0; j < m; ++j )
        {
            cin >> matriz[i][j];
            
            // guarda nos indexes
            // o index do 0
            if ( matriz[i][j] == 0) 
            {
                indexN = i;
                indexM = j;
            }
        }
    }

    cout << indexN << " " << indexM << endl;
}