#include <iostream>

using namespace std;

/*

    X _ O  _ X X   _ _ o
    0 1 2  3 4 5   6 7 8

    X _ O
    _ X X
    _ _ O

*/

void stampa(char *tab)
{
    for (int i = 0; i < 9; i++)
    {
        cout << tab[i] << " ";
        if (i == 2 || i == 5 || i == 8) // alla fine di ogni riga (3x3) vai a capo
        {
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    int risultato = -1;
    char vuoto = '_';

    // inizializzo la tab
    char tab[9];
    for (int i = 0; i < 9; i++)
    {
        tab[i] = vuoto;
    }
    stampa(tab);

    tab[0] = 'X';
    tab[2] = 'O';
    tab[4] = 'X';
    tab[8] = 'O';
    tab[5] = 'X';

    stampa(tab);

    // QUI LAVORO

    int combinazioni[8][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}};

    for (int i = 0; i < 8; i++)
    {

        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = a == b && c == vuoto && a == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][2];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = c == b && a == vuoto && c == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][0];
        }
    }

    cout << "risultato ottenuto: " << risultato << " | risultato atteso: 3" << endl;
}