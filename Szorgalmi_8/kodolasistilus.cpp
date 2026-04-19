#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct AdatPar {
    int a;
    int b;
};

void rendezes(AdatPar tomb[], int meret) {
    for (int i = 0; i < meret; i++) {
        for (int j = 0; j < meret - 1; j++) {
            if (tomb[j].a > tomb[j + 1].a) {
                swap(tomb[j], tomb[j + 1]);
            }
        }
    }
}

void fejlec() {
    cout << "===" << endl;
}

void elvalaszto() {
    cout << "---" << endl;
}

void cim() {
    cout << "Output:" << endl;
}

void feldolgoz(AdatPar tomb[], int meret) {
    for (int i = 0; i < meret; i++) {
        int a = tomb[i].a;
        int b = tomb[i].b;
        int eredmeny;

        if (a % 2 == 0) {
            if (b % 2 == 0)
                eredmeny = a * b;
            else
                eredmeny = a + b;
        } else {
            if (b % 2 == 0)
                eredmeny = a - b;
            else
                eredmeny = a;
        }

        cout << eredmeny << endl;
    }
}

void futtat(AdatPar tomb[], int meret) {
    rendezes(tomb, meret);
    fejlec();
    cim();
    elvalaszto();
    feldolgoz(tomb, meret);
}

int main() {
    AdatPar adatok[5] = {
        {5, 1},
        {2, 4},
        {3, 7},
        {1, 6},
        {4, 5}
    };

    futtat(adatok, 5);

    return 0;
}
