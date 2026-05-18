#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cin >> n;
    for (i=1;i<=2*n-1;i++) {
        for (j=1;j<=2*n-1;j++) {
            if (j==i || j==(2*n-i))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}