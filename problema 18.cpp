/*volumen y superficie de un cuerpo
geométrico*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double volumen,superficie,h,r,pi;
	pi=3.14;
	cout<<"ingrese el radio"<<endl;
	cin>>r;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	volumen=(((2*pi*r*r*r)/3)+(pi*r*r*h));
	superficie=(2*pi*r*(h+r))+(r*r*pi);
	cout<<"el volumen es: "<<volumen;
	cout<<endl<<"la superficie es: "<<superficie;
return 0;
}