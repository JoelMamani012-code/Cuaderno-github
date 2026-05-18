/*volumen y superficie de un cuerpo
geométrico*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float volumen;
	float r,pi,R,h;
	cout<<"ingrese el radio mayor "<<endl;
	cin>>R;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	cout<<"ingrese el radio menor"<<endl;
	cin>>r;
	pi=3.14;
	volumen=((h*pi/3)*((r*r)+(R*R)+(r*R)));
	cout<<"el volumen es: "<<volumen;

return 0;
}