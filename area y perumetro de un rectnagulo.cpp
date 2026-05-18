//area y perimetro de un rectnagulo//
#include <iostream>
using namespace std;
int main()
{
	int b,h,p,a;
	cout<<"ingrese la base"<<endl;
	cin>>b;
	cout<<"ingrese la altura"<<endl;
	cin>>h;
	p=2*(h+b);
	a=b*h;
	cout<<"el area es: "<<a;
	cout<<endl<<"el perimetro es: "<<p;
}