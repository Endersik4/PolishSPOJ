#include<iostream>
using namespace std;
int t, Members;
int main()
{
    cin>>t;
    for (int i = 0; i != t; i++)
    {
        cin>>Members;
        int Najlepsza = -1, Najmniejsza[2000], Punkty[2000];
        int IleNaj = 0, suma = 0;
        for (int j = 0; j != Members; j++)
        {
            cin>>Punkty[j];
            if (Najlepsza < Punkty[j])
            {
                Najlepsza = Punkty[j];
                IleNaj = 0;
            }
            else if (Najlepsza == Punkty[j])
            {
                IleNaj++;
            }       
        }  
        for (int j = 0; j != Members; j++)
        {
            int jaki = 0;
            Najmniejsza[j] = Punkty[0];
            for (int h = 0; h != Members; h++)
            {
                if (Najmniejsza[j] >= Punkty[h])
                {
                    Najmniejsza[j] = Punkty[h];
                    jaki = h;
                }
            }
            Punkty[jaki] = Najlepsza;
        }
        
        for (int j = 0; j <= IleNaj; j++)
        {
            cout<<Najlepsza<<" ";
        }
        
        suma = Members - IleNaj - 1;
        for (int j = 0; j != suma; j++)
        {
            cout<<Najmniejsza[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} 