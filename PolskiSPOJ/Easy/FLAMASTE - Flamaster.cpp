#include <iostream>
#include <string>
using namespace std;
int ile, licz[200],j,h,suma,g,y;
string a;
int main()
{
    cin>>ile;
    while(ile--)
    {
        cin>>a;
        for (int i=0; i<a.size(); i++)
        {
            if (a[i] == a[i+1])
            {
                licz[j]++;
                continue;
            }

            j++;
            suma++;
        }
        for (int i=0; i<suma; i++)
        {

            if (licz[h] == 0) {cout<<a[y]; y++;}
            else if (licz[h] == 1) {cout<<a[y]<<a[y+1]; y=y+2;}
            else
            {
                y=y+licz[h]+1;
                cout<<a[g]<<licz[h]+1;
            }
            g+=licz[h]+1;
            h++;
        }
        cout<<endl;
        for (int i=0; i<suma; i++) {licz[i] = 0;}
        j = 0;
        h = 0;
        suma = 0;
        g = 0;
        y = 0;
    }
    return 0;
}
