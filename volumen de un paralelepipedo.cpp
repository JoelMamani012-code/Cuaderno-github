//volumen de un paralelepipedo//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double volumen,a,b,c;
	cout<<"ingrese la base"<<endl;
	cin>>a;
	cout<<"ingrese el ancho"<<endl;
	cin>>b;
	cout<<"ingrese la altura"<<endl;
	cin>>c;
	volumen=a*b*c;
	cout<<"el volumen es: "<<volumen;
return 0;
}