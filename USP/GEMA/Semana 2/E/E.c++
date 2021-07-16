// trabalha com palíndromos
#include <bits/stdc++.h>
using namespace std;

int pal(string s);

int main() 
{
    int tam{0};
    cin >> tam;

    string palavra;
    cin >> palavra;
    
    cout << pal(palavra) << endl;

    return 0;
}

int pal(string s)
{
    int size{s.size()}, count{0};

    // checa se é um palíndromo
    for(int i = 0, j = size-1; i < size/2; i++, j-- )
    {
        // conta a quantidade de mudanças necessárias para tornar a palvra um palíndromo
        if (s[i] != s[j])
        {
            count++;
        }
    }
    return count;
} 
