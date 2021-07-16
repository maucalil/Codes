#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string tipo;
        string x;

        cin >> tipo;
        cin >> x;

        v.push_back(tipo+x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        
    }
    
    return 0;
}