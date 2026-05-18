//area y perimetro de un heptagono/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a,l;
	double perimetro,area;
	cout<<"ingrese un lado"<<endl;
	cin>>l;
	cout<<"ingrese el apotema"<<endl;
	cin>>a;
	area=(7*a*l)/2;
	perimetro=6*7;
	cout<<"el area es: "<<area;
	cout<<endl<<"el perimetro es: "<<perimetro;
return 0;
}