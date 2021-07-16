#include <iostream>
using namespace std;

int main() 
{
    float arr[10];
    float* arrPtr{nullptr};

    for (int i = 0; i < 10; ++i)
    {
        arrPtr = &arr[i];
        cout << arrPtr << endl;
    }

    return 0;
}