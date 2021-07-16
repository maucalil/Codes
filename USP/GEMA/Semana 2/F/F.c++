#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;
 
// a função do exercício é a função 2 elevado a n
int main()
{
    int n, k, count{0};
    cin >> n >> k;
 
    int ciclos = (n - 1) / 4;
    int ciclosI = (n - 1) % 4; // ciclos incompletos
 
    switch(k)
    {
        case 1:
            count = 1;
        break;
 
        case 2:
            count = ciclos;
            if (ciclosI >= 1) count++;
        break;
 
        case 4:
            count = ciclos;
            if (ciclosI >= 2) count++;
        break;
 
        case 6:
            count = ciclos;
        break;
 
        case 8:
            count = ciclos;
            if (ciclosI >= 3) count++;
        break;
 
        default:
        break;
    }
 
    cout << count << endl;
 
   return 0;
}
