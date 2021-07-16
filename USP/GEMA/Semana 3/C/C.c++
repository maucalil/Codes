#include <bits/stdc++.h>

using namespace std;
const int N = 10;

main()
{
    int v[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    int l = 1, r = 10, m;
    int x{0}, i{0};  

    for (i = 0; i < 4; ++i)
    {
        m = (l+r)/2;
        cout << v[m] << "\n"; // chuta o número 5
        fflush(stdout);
        cin >> x;

        if ( x == 2)
        {
            break;
        }
        else if (x == 1) // maior
        {   
             l = m + 1;       
        }
        else // menor
        {
            r = m - 1;
        }
    }
        
}

