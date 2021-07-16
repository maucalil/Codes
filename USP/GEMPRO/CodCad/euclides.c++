#include <iostream>

using namespace std;

int mdc(int a, int b){
  return (b == 0 ? a : mdc(b, a%b)); //b == 0 ? Caso sim, retorne a, caso não, retorne mdc(b, a%b)
}

int main() {
    int n;
    cin >> n;
    int v[n];
    int mdcv;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = n-1; i > 0; i--)
    {
        int vezes{0};
        mdcv = mdc(v[0], v[i]);
        for (int j = 0; j < n; j++)
        {
            if(v[j]%mdcv == 0)
            {
                vezes++;
            }
        }
        if (vezes == n)
        {
            break;
        }
    }

    cout << mdcv << endl;

    return 0;
}