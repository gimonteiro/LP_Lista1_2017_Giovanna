#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, cont=0;
    double resp2=0;
    cin >> n;
    resp2 = pow(((2*1) - 1),((2*1) - 1)) / pow((2*1),(2*1));
    if (n>1) {
        for (cont = 2; cont<=n; cont++) {
            if (cont%2==0){
                resp2 = resp2 + pow(((2*cont) - 1),((2*cont) - 1)) / pow((2*cont),(2*cont));
            }
            else {
                resp2 = resp2 * pow(((2*cont) - 1),((2*cont) - 1)) / pow((2*cont),(2*cont));
            }
        }
    }
    cout << resp2 << endl;
    system("pause");
    return 0;
}
