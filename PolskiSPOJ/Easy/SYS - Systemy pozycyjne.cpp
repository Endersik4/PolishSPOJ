#include<iostream>
using namespace std;
int Liczba[10000], t, dzielenie, jeden;
int main()
{
    cin>>t;
    for (int i = 0; i != t; i++)
    {
        cin>>Liczba[i];
    }
    for (int i = 0; i != t; i++)
    {
        int reszta[100], inna[100];
        int j = 0, n = 0;
        dzielenie = Liczba[i];
        jeden = Liczba[i];
        if (dzielenie >= 16)
        {
            while (dzielenie >= 16)
            {
                reszta[j] = dzielenie % 16;
                dzielenie = dzielenie / 16;
                j++;
                if (dzielenie < 16)
                {
                    reszta[j] = dzielenie;
                    j++;
                    break; 
                }
            }
        }
        else 
        {
           reszta[j] = dzielenie;
           j++;
        }
        
        if (jeden >= 11)
        {
            while (jeden >= 11)
            {
                inna[n] = jeden % 11;
                jeden = jeden / 11;
                n++;
                if (jeden < 11)
                {
                    inna[n] = jeden;
                    n++;
                    break; 
                }
            }
        }
        else 
        {
           inna[n] = jeden;
           n++;
        }
       
        for (int e = j-1; e >= 0; e--)
        {
          switch(reszta[e])
          {
            case 10: cout<<"A"; break;
            case 11: cout<<"B"; break;
            case 12: cout<<"C"; break;
            case 13: cout<<"D"; break;
            case 14: cout<<"E"; break;
            case 15: cout<<"F"; break;
            default: cout<<reszta[e]; break;
          }
        }
        
        cout<<" ";
        
        for (int e = n-1; e >= 0; e--)
        {
          switch(inna[e])
          {
            case 10: cout<<"A"; break;
            case 11: cout<<"B"; break;
            case 12: cout<<"C"; break;
            case 13: cout<<"D"; break;
            case 14: cout<<"E"; break;
            case 15: cout<<"F"; break;
            default: cout<<inna[e]; break;
          }
        }
        
        cout<<endl;
    }
    return 0;
}