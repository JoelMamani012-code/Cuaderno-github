/*volumen y superficie de un cuerpo
geométrico*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float volumen;
	float r,h,pi;
	cout<<"ingrese el radio "<<endl;
	cin>>r;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	pi=3.14;
	volumen=((pi*r*r/3)*(2+h));
	cout<<"el volumen es: "<<volumen;

return 0;
}