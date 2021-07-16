#include <bits/stdc++.h>

using namespace std;

bool igual (char abre, char fecha)
{
    if (abre == '(') return fecha == ')';
    if (abre == '[') return fecha == ']';
    if (abre == '{') return fecha == '}';
    return false;
}

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    stack<char> st; // tds caracteres abertos
                    // esperando fechar

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else{
            if (st.empty() || !igual(st.top(), c))
            {
                cout << "DEU RUIM\n";
                return 0;
            }
            else
            {
                st.pop();
            }
        }
    }

    if (st.empty())
    {
        cout << "COMPLETINHA\n";
    }
    else
    {
        cout << "DEU RUIM\n";
    }
}