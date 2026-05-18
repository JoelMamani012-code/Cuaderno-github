//area y perimetro de un hexagono/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double l;
	double perimetro,area;
	cout<<"ingrese un lado"<<endl;
	cin>>l;
	area=(3*sqrt(3)/2)*l*l;
	perimetro=6*l;
	cout<<"el area es: "<<area;
	cout<<endl<<"el perimetro es: "<<perimetro;
return 0;
}