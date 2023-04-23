#include<iostream>
using namespace std;
int t, n, liczby[1000], ktore;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        float srednia = 0, suma = 0, roznica[1000];
        for (int i = 0; i != n; i++)
        {
            cin>>liczby[i];
            srednia += liczby[i];        
        }
        srednia /= n;
        for (int i = 0; i != n; i++)
        {
            if (liczby[i] > srednia) roznica[i] = liczby[i] - srednia;
            else roznica[i] = srednia - liczby[i];
        }
        suma = roznica[0];
        ktore = 0;
        for (int i = 1; i < n; i++)
        {
            if (suma > roznica[i]) 
            {
                suma = roznica[i];
                ktore = i;
            }
        }
        cout<<liczby[ktore]<<endl;
        
    }
    return 0;
}