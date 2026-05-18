#include <iostream>
#include <iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"ingrese los valores X,Y"<<endl;
	cin>>x>>y;
		if(x>0 && y>0)
		cout<<"I";
		else if(x<0 && y>0)
		cout<<"II";
		else if(x<0 && y<0)
		cout<<"III";
		else if(x>0 && y<0)
		cout<<"IV";
		else if(x==0 && y==0)
		cout<<"origen";
		else if((x<0 && y==0) or (x>0 && y==0) or (x==0 && y<0)or(x==0 && y>0))
		cout<<"no pertenece a ningun cuadrante";
	return 0;
}