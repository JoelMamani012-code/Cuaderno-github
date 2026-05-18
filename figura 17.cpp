#include <iostream>
using namespace std;
//i=filas && j=columnas
int main() {
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) 
			cout <<" ";
        for (j = 1; j <= 2 * i - 1; j++)
			cout << "*";
    cout << endl;
    }
    for (i = 1; i < 2; i++) {
        for (j = 1; j < n; j++)
		cout << " ";
    cout << "*" << endl;
    }
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= n - i; j++)
		cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
		cout << "*";
    cout << endl;
    }
    return 0;
}