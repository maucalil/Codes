#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, M[100000], vmax{0}, vmin = pow(10,9);
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> M[i];

        if (M[i] > vmax)
        {
            vmax = M[i];
        } 

        if (M[i] < vmin)
        {
            vmin = M[i];
        }
    }

    cout << vmax - vmin << endl;
    
    return 0;
}

