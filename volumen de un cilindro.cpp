//volumen de un cilindro//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double volumen,r,h,pi;
	pi=3.14;
	cout<<"ingrese el radio"<<endl;
	cin>>r;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	volumen=pi*r*r*h;
	cout<<"el volumen es: "<<volumen;
return 0;
}