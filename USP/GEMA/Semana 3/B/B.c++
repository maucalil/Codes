#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, m; // linhas e colunas da matriz, respectivamente
    int contadorI{0}; // contador de números iguais por fileira
    int contadorC{0}; // contador de números crescente por fileira  
    int contadorD{0}; // contador de números decrescentes por fileira  

    cin >> n >> m; // pede os valores de n e m

    long long matriz[n][m];

    // forma a matriz pedindo valores para o usuário
    for ( int i = 0; i < n; ++i )
    {
        for ( int j = 0; j < m; ++j )
        {
            cin >> matriz[i][j];  
        }
    }

    // se o nmr de  linhas for 1 printa S para todos pois não há comparações
    if ( n == 1)
    {
        for ( int j = 0; j < m; ++j )
        {
            cout << "S" << endl;
        }
    }
    else
    {
    // testa as condições do problema    
    for ( int j = 0; j < m; ++j )
    {
        for ( int i = 1; i < n; ++i )
        {
            if ( matriz[i][j] == matriz[i - 1][j] )
            {
                contadorI++;
            }
            else if ( matriz[i][j] > matriz[i - 1][j] )
            {
                contadorC++;
            }
            else 
            {
                contadorD++;
            }
        }
        // printa S se os contadores forem iguais ao nmr de linhas
        // ou N se diferente
        if ( contadorI == ( n - 1 ) ||
             contadorC == ( n - 1 ) || 
             contadorD == ( n - 1 ))
        {
            cout << "S" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
        // zera os contadores para o próximo loop
        contadorI = 0;
        contadorC = 0;
        contadorD = 0;
    }
    }
}


