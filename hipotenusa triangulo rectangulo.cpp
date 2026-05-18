//hipotenusa de un triangulo rectangulo//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int A,B,H;
	cout<<"ingrese el primer cateto"<<endl;
	cin>>A;
	cout<<"ingrese el segundo cateto"<<endl;
	cin>>B;
	H=sqrt((A*A)+(B*B));
	cout<<"la hipotenusa es: "<<H;
return 0;
}