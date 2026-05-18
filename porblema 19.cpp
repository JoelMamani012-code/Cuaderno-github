//problema 19//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float volumen,superficie;
	float h,H,l;
	cout<<"ingrese la base del paralelepipedo"<<endl;
	cin>>l;
	cout<<"ingrese la altura del paralelepipedo"<<endl;
	cin>>H;
	cout<<"ingrese la altura de la piramide"<<endl;
	cin>>h;
	volumen=(((l*l*h)/3)+(l*l*H));
	superficie=((4*(l*h))+(l*l))+(4*(sqrt((h*h)+(l/2*l/2)))*(l/2));
	cout<<"el volumen es: "<<volumen;
	cout<<endl<<"la superficie es: "<<superficie;
return 0;
}