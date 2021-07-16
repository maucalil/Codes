#include <bits/stdc++.h>

using namespace std;

int main() {

    char s[] = "A string";
    char *sPtr = s;
    cout << s[0] << " " << *sPtr  << " " << s[3] << endl;

    sPtr += 2;
    cout << *sPtr << " " << sPtr[2] << " " << sPtr[5] << endl;

    return 0;
}