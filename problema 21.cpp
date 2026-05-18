/*volumen y superficie de un cuerpo
geométrico*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float volumen;
	float A,a,h,H,l,L;
	cout<<"ingrese la base del tronco "<<endl;
	cin>>L;
	cout<<"ingrese la altura de la piramide"<<endl;
	cin>>H;
	cout<<"ingrese el apotema"<<endl;
	cin>>A;
	l=L/2;
	h=H/2;
	a=A/2;
	volumen=((L*A*H)-(3*(l*a*h)/2));
	cout<<"el volumen es: "<<volumen;

return 0;
}