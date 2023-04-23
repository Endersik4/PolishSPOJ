#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int t;
long long int liczba;

string jednosc[9] = {"jeden ", "dwa ", "trzy ", "cztery ", "piec ", "szesc ", "siedem ", "osiem ", "dziewiec "};
string nasscie[9] = {"jede", "dwa", "trzy", "czter", "piet", "szes", "siedem", "osiem", "dziewiet"};
string dziesiat[8] = {"dwa", "trzy", "czter", "piec", "szesc", "siedem", "osiem", "dziewiec"};
string setki[9] = {"sto", "dwiescie", "trzysta", "czterysta", "piecset","szescset", "siedemset", "osiemset", "dziewiecset"};
string liczba_z_int;

int pierwsza_liczba(int n)
{
    while (n >= 10)
        n /= 10;
    return n;
}

int jed(int n)
{
    if (n < 11 && n != 0)
    {
        if (n == 10) cout<<"dziesiec ";
        else cout<<jednosc[n-1];
    }
    return n;
}

int nas(int n)
{
    if (n > 10 && n < 20 && n != 0)
    {
        cout<<nasscie[(n%10)-1]+"nascie ";
    }
    return n;
}

int dzies(int n)
{
    if (n > 19 && n < 100)
    {
        int pierw = pierwsza_liczba(n);
        cout<<dziesiat[pierw-2];

        if (pierw == 2) cout<<"dziescia ";
        else if (pierw == 3 || pierw == 4)cout<<"dziesci ";
        else cout<<"dziesiat ";

        if (n%10 != 0) cout<<jednosc[(n%10)-1];
    }
    return n;
}

int stowy(int n)
{
    if (n > 99 && n < 1000)
    {
        int pierw2 = pierwsza_liczba(n);
        cout<<setki[pierw2-1]<<" ";
    }
    return n%100;
}

void jaka_dl(int dl)
{
    if (dl > 12) cout<<"bln. ";
    else if (dl > 9) cout<<"mld. ";
    else if (dl > 6) cout<<"mln. ";
    else if (dl > 3) cout<<"tys. ";
}

int main()
{
    cin>>t;
    for (int i = 0; i != t; i++)
    {
        cin>>liczba;
        liczba_z_int = to_string(liczba);

        int dlugosc_liczby = liczba_z_int.length();
        int pierw_int[5] = {0,0,0,0,0}, tab_int = 0;

        while (liczba_z_int.length() != 0)
        {

            //cout<<"LENGTH"<<liczba_z_int.length()<<endl;

            if (liczba_z_int.length() > 3)
            {
                string pierw_trzy = "333";
                for (int i = (liczba_z_int.length()-3), j=0; i != liczba_z_int.length(); i++, j++)
                {
                    pierw_trzy[j] = liczba_z_int[i];
                }
                pierw_int[tab_int] = stoi(pierw_trzy);
                liczba_z_int.erase(liczba_z_int.end()-3, liczba_z_int.end());
            }
            else
            {
                pierw_int[tab_int] = stoi(liczba_z_int);
                liczba_z_int.erase();
            }
            tab_int++;

        }
        for (int i = tab_int-1; i != -1; i--)
        {
            int ra = pierw_int[i];
            pierw_int[i] = stowy(pierw_int[i]);
            jed(pierw_int[i]);
            nas(pierw_int[i]);
            dzies(pierw_int[i]);


            if (ra != 0)jaka_dl(dlugosc_liczby);
            dlugosc_liczby-=3;

        }
        cout<<endl;
    }

    return 0;
}
