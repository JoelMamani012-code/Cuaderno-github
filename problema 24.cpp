/*volumen y superficie de un cuerpo
geométrico*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float volumen, litros;
    float a, b, c;
    cout << "ingrese la base : " << endl;
    cin >> a;
    cout << "ingrese la altura : " << endl;
    cin >> b;
    cout << "ingrese el ancho : " << endl;
    cin >> c;
    volumen = a * b * c;     
    litros = volumen * 1000 *4 / 5; 
    cout << "los litros son: " << litros;

    return 0;
}
