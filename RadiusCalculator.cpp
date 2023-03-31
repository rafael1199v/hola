#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float radius, longitud_arco = 0, area = 0 ,volumen = 0;

    cout << "Ingrese el valor del radio: ";
    cin >> radius;
    if (radius >= 0){
        longitud_arco = M_PI * radius * 2;
        area = M_PI * pow(radius, 2);
        volumen = (4/3) * M_PI * pow(radius, 3);

        cout << "La longitud de la circunferencia es: " << longitud_arco << endl;
        cout << "El radio de la circunferencia es: " << area << endl;
        cout << "El volumen de la esfera es: " << volumen << endl;
    }
    else{
        cout << "Datos ingresados no validos" << endl;
    }


    return 0;
}
