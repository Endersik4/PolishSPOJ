// JSUMDUZE - Dodawanie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void reverse(std::string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        std::swap(str[i], str[n - i - 1]);
}

int main()
{
    using namespace std;
    int ile;
    cin >> ile;
    string pierw, dwa, trzy;

    for (int i = 0; i != ile; i++)
    {
        cin >> pierw;
        cin >> dwa;
        int naj = pierw.length();
        int mal = dwa.length();
        bool czy_je = false;
        if (naj > 7 || mal > 7)
        {
            if (naj < dwa.length())
            {
                naj = dwa.length();
                mal = pierw.length();
                pierw.swap(dwa);
            }
            for (int j = naj - 1, g = mal - 1; j >= 0; j--, g--)
            {
                int a = pierw[j] - '0';
                if (g >= 0)
                {
                    int b = dwa[g] - '0';
                    int suma = a + b;
                    if (czy_je == true)
                    {
                        suma++;
                        czy_je = false;
                    }
                    if (suma > 9)
                    {
                        suma -= 10;
                        trzy += to_string(suma);
                        czy_je = true;
                    }
                    else
                    {
                        trzy += to_string(suma);
                    }
                }
                else
                {
                    if (czy_je == true)
                    {
                        a++;
                        czy_je = false;
                    }
                    if (a > 9 && j != 0)
                    {
                        czy_je = true;
                        a -= 10;

                    }
                    if (a >= 10)
                    {
                        a = 0;
                        trzy += "01";
                    }
                    else trzy += to_string(a);

                }
                if (j == 0 && g == 0 && czy_je == true) trzy += "1";
            }
            reverse(trzy);
            cout << trzy << endl;
            trzy.clear();
        }
        else
        {
            int suma = stoi(pierw) + stoi(dwa);
            cout << suma << endl;
        }
    }
}
