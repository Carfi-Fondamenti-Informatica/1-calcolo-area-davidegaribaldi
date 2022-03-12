#include <iostream>
using namespace std;

int main() {
    float a = 0, b = 0, c = 0, d = 0;
            float areatriangolo = 0, areaquadrato = 0, arearettangolo = 0, areatrapezio = 0;
    {
        cout << "Ciao dammi la base e l'altezza del triangolo " << endl;
        cin >> a >> b;
        areatriangolo = (a * b) / 2;
        cout << "L'area del triangolo e' " << areatriangolo << endl;
    }
    {
        cout << "Ciao dammi il lato del quadrato " << endl;
        cin >> a;
        areaquadrato = a * a;
        cout << "L'area del quadrato e' " << areaquadrato << endl;
    }
    {
        cout << "Ciao dammi la base e l'altezza del rettangolo " << endl;
        cin >> a >> b;
        arearettangolo = (a * b);
        cout << "L'area del rettangolo e' " << arearettangolo << endl;
    }
    {
        cout << "Ciao dammi la base minore,la base maggiore e l'altezza del trapezio " << endl;
        cin >> a >> b >> c;
        areatrapezio = (a + b) * c / 2;
        cout << "L'area del trapezio e' " << areatrapezio << endl;
    }

    return 0;
}
