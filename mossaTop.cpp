#include <iostream>

using namespace std;

void stampa(char *tabella)
{
    for (int i = 0; i < 9; i++)
    {
        cout << tabella[i] << " ";
        if (i == 2 || i == 5 || i == 8) // alla fine di ogni riga (3x3) vai a capo
        {
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
}

int main(){
    char vuoto = '_';

    // inizializzo la tabella
    char tabella[9];
    for (int i = 0; i < 9; i++)
    {
        tabella[i] = vuoto;
    }
    stampa(tabella);

    tabella[0]='X';
    tabella[2]='O';
    tabella[4]='X';
}