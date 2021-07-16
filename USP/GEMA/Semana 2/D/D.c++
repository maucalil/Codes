#include <iostream>
using namespace std;

int main()
{
    int n{0}, N{0}, counter{0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> N;
        if (N%2 == 0)
        {
            counter++;
        }
    }
    cout << counter << endl;
}
