#include <iostream>

using namespace std;

int mdc(int a, int b){
  return (b == 0 ? a : mdc(b, a%b)); //b == 0 ? Caso sim, retorne a, caso não, retorne mdc(b, a%b)
}

int main() {

    int n[4];
    int dividendo{0}, divisor{0};

    for (int i = 0; i < 4; i++)
    {
        cin >> n[i];
    }
    if (n[1]==0 && n[3]==0 || n[0]==0 && n[2]==0)
    {
        cout << "0 0" << endl;
    }
    else if (n[0] == 0 && n[1]==0 || n[2] == 0 && n[3]==0)
    {
        cout << n[0]+n[2] << " " << n[1]+n[3] << endl;
    }
    else
    {
        if (n[1] == n[3])
        {
            dividendo = n[0]+n[2];
            divisor = n[1];  
        } 
        else 
        {
            int mmc = (n[1]*n[3])/mdc(n[1], n[3]);
            dividendo = (mmc/n[1])*n[0] + (mmc/n[3])*n[2];
            divisor = mmc;
        }

        int mdcc = mdc(dividendo, divisor);
        
        cout << dividendo/mdcc << " " << divisor/mdcc << endl; 
    }
    
    return 0;
}