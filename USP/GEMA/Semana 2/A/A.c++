#include <iostream>

using namespace std;

int main ()
{
    int a{0}, b{0}, y{0};

    cin >> a >> b;
 
    while (a <= b) 
    {
        a *= 3;
        b *= 2;
        y++;
    }

    cout << y << endl;
    return 0;
}