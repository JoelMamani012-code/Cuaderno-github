#include <iostream>
using namespace std;
int main(){
	int A,B,C,R1,R2;
	cout<<"ingrese los valores de los gatos y el raton separados por un espacio"<<endl;
	cin>>A >>B >>C;
	R1=sqrt((C-A)*(C-A));
	R2=sqrt((C-B)*(C-B));
	if(R1>R2)
		cout<<"gato B";
	else if(R2>R1)
		cout<<"gato A";
	else if(R2==R1)
		cout<<"raton c";
return 0;		
}