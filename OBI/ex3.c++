#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int x[n];
    vector<int> ans;

    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
        if (x[i] == 0)
        {
            ans.pop_back();
        }
        else 
        {
            ans.push_back(x[i]);
        }
    }

    int soma{0};
    for (int i = 0; i < ans.size(); i++)
    {
        soma += ans[i];
    }

    cout << soma << endl;
    
    return 0;
}