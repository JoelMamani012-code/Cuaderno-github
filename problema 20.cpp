/*volumen y superficie de un cuerpo
geométrico*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float volumen,superficie;
	float a,h,H,p,l;
	cout<<"ingrese la base del paralelepipedo"<<endl;
	cin>>l;
	cout<<"ingrese la altura del paralelepipedo"<<endl;
	cin>>p;
	cout<<"ingrese la altura de la piramide"<<endl;
	cin>>h;
	H=p-h;
	a=2*sqrt(2);
	volumen=((l*l*p)-((l*l*H)/3));
	superficie=((4*(p*l))+(2*a*l)+(l*l));
	cout<<"el volumen es: "<<volumen;
	cout<<endl<<"la superficie es: "<<superficie;
return 0;
}