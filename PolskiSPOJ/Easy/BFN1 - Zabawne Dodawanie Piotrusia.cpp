#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;
int t, palin, dodawanie;
string s;
bool czy_palin(string a)
{
    for(int i = 0; i < a.length() / 2 + 1; i++)
        if(a.at(i) != a.at(a.length() - 1 - i)) return false;
    return true;
}
string invert(string tekst)
{
    string wynik;
    for(int i = 0; i < tekst.length(); i++)
        wynik.insert(0, tekst.substr(i, 1));
    return wynik;
}
string convert_to_string(int liczba)
{
    string wynik;
    ostringstream ss;
    ss << liczba;
    wynik = ss.str();
    ss.clear();
    ss.str(string());
    return wynik;
}
int main()
{
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        cin >> palin;
        while(czy_palin(convert_to_string(palin)) == 0)
        {
            dodawanie++;
            s = invert(convert_to_string(palin));
            palin += atoi(s.c_str());
        }
        cout << palin << " " << dodawanie << endl;
        dodawanie = 0;
    }
    return 0;
}
