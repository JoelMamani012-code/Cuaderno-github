#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main() {
    
    srand(time(0));
    int l,computadora;
    cout<<"elije 1=piedra : 2=papel :3=tijera"<<endl;
    cin>>l;
    computadora = rand() % 3 + 1;
    	if (l<1 or l>3)
    		cout<<"error";
		else if (l==computadora)
    		cout<<"empate";
    	else if(computadora==1 && l==3)
			cout<<"pierde usted";
		else if(computadora==1 && l==2)
			cout<<"gana usted";
		else if(computadora==2 && l==1)
			cout<<"pierde usted";
		else if(computadora==2 && l==3)
			cout<<"gana usted";
		else if(computadora==3 && l==2)
			cout<<"pierde usted";
		else if(computadora==3 && l==1)
			cout<<"pierde usted";
        cout <<endl<< "La computadora eligio: "<<computadora;
    return 0;
}