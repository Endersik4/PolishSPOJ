#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,l, a = 0, liczby[2000], wynik[2000], lg, ld, rg, rd;
        cin>>k>>l;
        int suma = k * l;
        for (int i = 0; i != suma; i++)
        {
            cin>>liczby[i];
            wynik[i] = liczby[i];
            if (i == 0) {lg = i; /*cout<<"LG = "<<lg<<endl;*/}
            else if (i == (l - 1)) {rg = i; /*cout<<"RG = "<<rg<<endl;*/}
            else if (i == (suma - l)) {ld = i; /*cout<<"LD = "<<ld<<endl;*/}
            else if (i == (suma - 1)) {rd = i; /*cout<<"RD = "<<rd<<endl;*/}
            
        }
        while (a != rg)
        {
            wynik[a] = liczby[a+1];
            a++;
        }
        a = rg;
        while (a != rd)
        {
            wynik[a] = liczby[a+l];
            a+=l;
        }
        a = rd;
        while (a != ld)
        {
            wynik[a] = liczby[a-1];
            a-=1;
        }
        a = ld;
        while (a != lg)
        {
            wynik[a] = liczby[a-l];
            a-=l;
        }
        
        for (int i = 0; i != suma; i++)
        {
            cout<<wynik[i]<<" ";
            if ((i + 1)%l == 0) cout<<endl;
        }
     }
    return 0;
}