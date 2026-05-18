#include <iostream>
#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"and"<<endl;
	cout<<(a<0 && b>0);
	cout<<endl<<"or"<<endl;
	cout<<(a<0 or b>0);
	cout<<endl<<"not"<<endl;
	cout<< !(a<0 && b>0);
return 0;
}