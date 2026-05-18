#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"ingrese la cantidad de galaxias"<<endl;
    cin>>a >>b >>c;
    if (a<b)    //1
    	cout<<"true ";
   		else
    		cout<<"false  ";
    if (c>a)	//2
    		cout<<"true  ";
    	else
    		cout<<"false  ";
    if (b==a)	//3
    		cout<<"true  ";
    	else
    		cout<<"false  ";
    if (a!=c)	//4
    		cout<<"true  ";
    	else
    		cout<<"false  ";
    if (c<=b)	//5
    		cout<<"true  ";
    	else
    		cout<<"false  ";		
    return 0;
}