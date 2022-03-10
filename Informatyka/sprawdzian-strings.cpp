#include <iostream>
#include <string>
using namespace std;

int main()
{
    string wyraz;                       // okre�lamy zmienn�, w kt�rej przechowamy nasz wyraz
    int licz=0;                         // okre�lamy zmienn�, kt�ra zliczy wyst�pienia litery "E"
    int dl = wyraz.size();              // tworzymy zmienn� dl, kt�rej warto�� b�dzie r�wna d�ugo�ci wyrazu
    cout << "Podaj wyraz: ";
    cin >> wyraz;                       // prosimy o podanie wyrazu

    for(int i=0; i<dl; i++)             // p�tla zamieniaj�ca kolejne litery wyrazu na du�e
    {
        wyraz[i] = toupper(wyraz[i]);
        if(wyraz[i] == 'E')
            licz++;
    }

    cout << "Twoj wyraz sklada sie z " << dl<< " liter." << endl;
    cout << "Twoj wyraz pisany duzymi literami: " + wyraz << endl;
    cout << "Litera \"E\" wystetepuje " << licz << " razy." << endl;
    cout << "Wyraz pisany wspak: ";
    for (int j=dl-1; j>=0; j--)         // p�tla wypisuj�ca wyraz od ko�ca
    {
        cout << wyraz[j];
    }

    return 0;
}
