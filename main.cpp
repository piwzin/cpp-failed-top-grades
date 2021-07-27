#include <iostream>
using namespace std;


const int MENOR_NOTA = 0;
const int MAIOR_NOTA = 100;
const int MEDIA = 60;
const int NOTA_TOP = 90;

int main() {

    int quantidade=0, notas, reprovados = 0, tops = 0, aprovados = 0;


    while (!(notas < 0)){

            cout << "Nota: ";
            cin >> notas;
            quantidade+=1;

        if (notas < MEDIA && notas > MENOR_NOTA) {
            reprovados += 1;
        }
        else if (notas >= NOTA_TOP) {
            tops += 1;
        } else if(notas < MENOR_NOTA) quantidade--;
}


    cout << "\n" << "Num. notas = " << quantidade << endl;
    cout << "Reprovados = " << reprovados << endl;
    cout << "Tops       = " << tops << endl;

    return 0;
