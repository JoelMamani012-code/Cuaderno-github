/*volumen y superficie de un cuerpo
geométrico*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float volumen;
    float h,l;
    cout << "ingrese la base : " << endl;
    cin >> l;
    cout << "ingrese la altura faltante : " << endl;
    cin >> h;
    volumen = ((4*(l*l*l))-(h*h*h))/3;      
    cout << "el volumen es: " << volumen;

    return 0;
}
