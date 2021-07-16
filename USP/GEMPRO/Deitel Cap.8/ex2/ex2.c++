#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() 
{
    string frase;
    getline(cin, frase);

    char* wordPtr{nullptr};
    int size = frase.size();
    int wordCnt{0};

    for (int i = 0; i < size+1; ++i)
    {
        wordPtr = &frase[i]; // abacaxi maldoso\0 
        
        if (*wordPtr == ' ' || *wordPtr == '\n'|| *wordPtr == '\0')
        {
            wordCnt++;
        }
    }

    cout << "Há " << wordCnt << " palavras nessa frase." << endl;

    return 0;
}