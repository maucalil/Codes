#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int dias{0}, fmax{0}, dmax{0};
    string p;

    cin >> dias;
    
    vector<int> a(dias);
    
    for ( int i = 0; i < dias; i++)
    {
        cin >> p;
        a[i] = p.size(); // [1, 2 , 2]
    }

    vector<int> frequency(a.size(), 1); 

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = (i+1); j < a.size(); j++)
        {
            if(a[i] == a[j])
            {
                frequency[i]++;
                frequency[j]++;
            }
        }
    }

    for (int i = 0; i < frequency.size(); i++)
    {
        if (frequency[i] > fmax){
            fmax = frequency[i];
            dmax = a[i];
        }
    }

    cout << dmax << "\n";
    return 0;  
}