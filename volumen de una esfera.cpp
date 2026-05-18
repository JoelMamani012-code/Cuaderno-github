//volumen de una esfera//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double volumen,r,pi;
	pi=3.14;
	cout<<"ingrese el radio"<<endl;
	cin>>r;
	volumen=(4*pi*pow(r,3))/3;
	cout<<"el volumen es: "<<volumen;
return 0;
}