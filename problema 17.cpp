/*calcular el área de la región sombreada, sabiendo que los
lados del hexágono regular son diámetros*/
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
	As=(pi*l*l)/(4);
	cout<<"el area sombreada es: "<<As;
return 0;
}