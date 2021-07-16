#include <bits/stdc++.h>

using namespace std;

void calc_esfera (float R, float* area, float* volume);

int main() 
{
    float r, area{0}, volume{0};
    cin >> r;

    
    calc_esfera (r, &area, &volume);
    cout << "A área superficial da esfera é: " << area << endl;
    cout << "O Volume da esfera é: " << volume << endl;

    return 0;
}

void calc_esfera (float R, float* area, float* volume)
{
    const float pi = 3.14;
    *area = 4*pi*R;
    *volume = (4*pi*R*R*R)/3;

    return;
}