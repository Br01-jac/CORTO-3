#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
//PEDIR AÑO AL USUARIO.
    cout << "Ingrese un año: ";
    int numero;
    cin >> numero;
//CONDICIONES PARA DETERMINAR SI EL AÑO ES BISIESTO O NO
    if (numero % 4 != 0){
        cout << "El año no es bisiesto " << endl;
    }else if (numero % 100 != 0){
        cout << "El año es es bisiesto." << endl;
    }else if (numero % 400 != 0){
        cout << "El año no es bisiesto" << endl;
    }else
        cout << "El año es bisiesto"<<endl;

    system("pause");
    getch();
    return 0;
}