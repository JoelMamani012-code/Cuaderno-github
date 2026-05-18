/*calcular el área de la región sombreada, si
ABCD es un cuadrado de lado “2a*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double As,l,pi;
	pi=3.14;
	cout<<"ingrese el lado"<<endl;
	cin>>l;
	As=(2*l*l)*(pi-2);
	cout<<"el area sombreada es: "<<As;
return 0;
}