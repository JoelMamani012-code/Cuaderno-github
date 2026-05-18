//area y perimetro de una elipse//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,pi;
	double perimetro,area;
	pi=3.14;
	cout<<"ingrese el radio mayor"<<endl;
	cin>>a;
	cout<<"ingrese el radio menor"<<endl;
	cin>>b;
	area=pi*a*b;
	perimetro=pi*(a+b);
	cout<<"el area es: "<<area;
	cout<<endl<<"el perimetro es aproximado es: "<<perimetro;
return 0;
}