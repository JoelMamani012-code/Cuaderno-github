#include <iostream>
using namespace std;
int main()
{

	int i,m,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++){
			m=i*j;
			cout<<j<<" x "<<i<<" = "<<m<<endl;
			if(j==10){
				cout<<"///////"<<endl;
			}
		}
	}
	return 0;
}