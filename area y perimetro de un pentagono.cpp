//area y perimetro de un pentagono/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,l;
	float perimetro,area;
	cout<<"ingrese el apotema"<<endl;
	cin>>a;
	cout<<"ingrese un lado"<<endl;
	cin>>l;
	area=(5*a*l)/2;
	perimetro=5*l;
	cout<<"el area es: "<<area;
	cout<<endl<<"el perimetro es: "<<perimetro;
return 0;
}