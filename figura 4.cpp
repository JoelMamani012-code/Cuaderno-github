#include <iostream>
using namespace std;
//i=filas && j==columnas
int main() {
	int n,i,j;
	cin>>n;
    for(i = n; i >=1; i--) {
        for(j = 1; j <=i; j++) {
            cout <<"*";
        }
        cout << endl;
    }

    return 0;
}