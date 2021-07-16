#include <bits/stdc++.h>
using namespace std;

void _sort (int*, int*, int*);

int main() 
{
    int x, y, z;
    cin >> x >> y >> z;
    int* xPtr{&x};
    int* yPtr{&y};
    int* zPtr{&z};

    _sort(xPtr, yPtr, zPtr);

    x = *xPtr;
    y = *yPtr;
    z = *zPtr;

    cout << x << "  " << y << "  " << z << endl;

}

void _sort (int* x, int* y, int* z)
{
    int temp;

    if( *x > *y ) 
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }

    if( *y > *z )
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }

    if( *x > *y )
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    return;
}