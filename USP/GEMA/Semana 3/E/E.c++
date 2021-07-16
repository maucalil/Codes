#include <bits/stdc++.h>
using namespace std;

int n, x;
int v[20], mark[20];

//             (0,0)
//   (1,1)               (1,0) 
//(2,3) (2,1)         (2,2) (2,0)
int solve(int i, int cur_sum)
{
    int sum{0};
    if ( i == n)
    {
        // retorna 1 se cur_sum == x
        if (cur_sum == x) return 1;
        // retorna 0 se cur_sum != x
        else return 0;
    }  

    int ans = 0;

    // pega
    ans += solve(i + 1, cur_sum + v[i]);        
    // não pega
    ans += solve(i + 1, cur_sum);

    return ans;
}

int main()
{
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = solve(0,0);

    cout << ans << endl;
    
    return 0;
}