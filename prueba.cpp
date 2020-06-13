#include "iostream"
#include "stdlib.h"
#include "time.h"
#include "conio.h"
using namespace std;
int main()
{
    int numero, dato = 0, cont = 1;
    srand(time(NULL)); //NUMERO ALEATORIO
    dato = 1 + rand() % (100);
    //REALIZAR BUCLE HASTA ADIVINAR NUMERO
    
  
     do
     {
          cout<<"ADVIDINAR NUMERO MAGICO, TIENE 5 INTENTOS: ";
        cin>>numero;

        if(numero<dato){
            cout<<"Numero Incorrecto,Ingrese numero mayor."<<endl;
            cout<<"Intentos realizados: "<<cont<<endl;
        }else{
            if(numero>dato){
                cout<<"Numero Incorrecto,Ingrese numero menor."<<endl;
                cout<<"Intentos realizados: "<<cont<<endl;
            }else{
                if(numero!=dato){
                    cout<<"FELICIDADES, ADIVINO EL NUMERO"<<endl;
                    cout<<"Intentos realizados: "<<cont<<endl;
                    break;
                }
            }
        }
        
        cont++;
     } while (cont<6);
     
         if(cont==6)
         {
             cout<<"Numero de intentos alcanzado"<<endl;
         }
        system("pause");
         getch();
     return 0;
}
