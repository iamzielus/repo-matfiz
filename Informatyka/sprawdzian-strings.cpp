#include <iostream>
#include <string>
using namespace std;

int main()
{
    string wyraz;                       // okreœlamy zmienn¹, w której przechowamy nasz wyraz
    int licz=0;                         // okreœlamy zmienn¹, która zliczy wyst¹pienia litery "E"
    int dl = wyraz.size();              // tworzymy zmienn¹ dl, której wartoœæ bêdzie równa d³ugoœci wyrazu
    cout << "Podaj wyraz: ";
    cin >> wyraz;                       // prosimy o podanie wyrazu

    for(int i=0; i<dl; i++)             // pêtla zamieniaj¹ca kolejne litery wyrazu na du¿e
    {
        wyraz[i] = toupper(wyraz[i]);
        if(wyraz[i] == 'E')
            licz++;
    }

    cout << "Twoj wyraz sklada sie z " << dl<< " liter." << endl;
    cout << "Twoj wyraz pisany duzymi literami: " + wyraz << endl;
    cout << "Litera \"E\" wystetepuje " << licz << " razy." << endl;
    cout << "Wyraz pisany wspak: ";
    for (int j=dl-1; j>=0; j--)         // pêtla wypisuj¹ca wyraz od koñca
    {
        cout << wyraz[j];
    }

    return 0;
}
