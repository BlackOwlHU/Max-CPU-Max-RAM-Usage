#include <iostream>
#include <string>

using namespace std;

struct Ebredesi_Naplo {
    string datum;
    string ebredesiIdo;
};

int main() {
    const int MAX = 100;
    Ebredesi_Naplo naplo[MAX];
    int db;

    cout << "Hany bejegyzest szeretnel felvinni? ";
    cin >> db;

    cin.ignore();

    for(int i = 0; i < db; i++) {
        cout << "\n" << i + 1 << ". bejegyzes:\n";

        cout << "Datum (pl. 2026-02-24): ";
        getline(cin, naplo[i].datum);

        cout << "Ebredesi ido (pl. 07:30): ";
        getline(cin, naplo[i].ebredesiIdo);
    }

    cout << "\nEbredes naplo:\n";

    for(int i = 0; i < db; i++) {
        cout << "\nDatum: " << naplo[i].datum << endl;
        cout << "Ebredesi ido: " << naplo[i].ebredesiIdo << endl;
    }

    return 0;
}