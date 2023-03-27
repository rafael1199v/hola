#include <iostream>

using namespace std;

int main(){
    int money, precio_helado = 5, helados_restantes;
    string pregunta;

    cout << "Ingrese la cantidad de dinero: ";
    cin >> money;
    cout << "Cantidad de dinero inicial: " << money << endl;
    cout << "Precio del helado: " << precio_helado << endl;
    for ( money ; money != 0; money -= precio_helado){
        cout << "Se compro un helado" << endl;
        cout << "Cantidad de dinero restante: " << money <<" para comprar helados."<< endl;
        cout << "Quieres comprar mas helados?  Y/N: ";
        cin >> pregunta;
        if (pregunta == "N"){
            cout << "Tu cantidad final restante de dinero es: " << money << endl;
            break;
        }
    }
    if (money == 0){
        cout << "Te quedaste sin dinero" << endl;
    }
    return 0;
}
