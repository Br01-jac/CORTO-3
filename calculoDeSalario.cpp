#include "iostream"
#include "conio.h"
#include "iomanip"

using namespace std;

//funcion para calcular salario y retornar a funcion principal.
float calcular()
{

    int horas, horasextras;
    float salariototal;
    //PEDIR DATOS
    cout << "ingrese horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese horas extras trabajadas: ";
    cin >> horasextras;
    salariototal = (horas * 1.75) + (horasextras * 2.50);

    return salariototal;
}
int main(void)
{
    float seguro = 0.04, AFP = 0.0625, Impuestorenta = 0.10, descuentototal, descontar, pisto, var;
    var = calcular();
    descuentototal = seguro + AFP + Impuestorenta;

    cout << "CALCULO DE SALARIO.\n\n";
    pisto = var * descuentototal;
    descontar = var - pisto;
    cout << "el salario total es de: " << var << " y salario con descuento es de: " <<fixed<<setprecision(2)<< descontar<<endl;

    getch();
    return 0;
}