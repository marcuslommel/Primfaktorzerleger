/*
    Primfaktorzerleger
    C++ 2012
*/

#include <iostream>
using namespace std;

void zerlegen(int var);

int main(void)
{
    int zahl;
    
    cout << "***Primfaktorzerleger***\n\n" << "Zahl: ";
    cin >> zahl;
    cout << "Die Primfaktorzerlegung von " << zahl << " ist:\n" << endl;
    zerlegen(zahl);
    cout << "\n" <<endl;
    system("PAUSE");
    return 0;   
}

void zerlegen(int var)
{
    int i = 2;
    int mod;
    int div;
    
    if(var == 1) //Um die Ausnahme 1 einzubeziehen
    {
        cout << 1;
    }
    
    do
    {
        mod = var % i;
        if(mod == 0)
        {
            div = var / i;
            var = div;
            cout << i;
            if(var != 1)
            {
                cout << "*";   
            } 
        }
        else
        {
            i++;   
        }
        
    }
    while(var != 1);
}
