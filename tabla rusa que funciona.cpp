#include <iostream>
using namespace std;
//i=filas && j==columnas
int main() {
	int n,i,j;
	cin>>n;
    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <=n; j++) {
            cout <<"*";
        }
        cout << endl;
    }

    return 0;
}