#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    double resp2=0;
    scanf("%d",&n);
    resp2 = pow(((2*1) - 1),((2*1) - 1)) / pow((2*1),(2*1));
    if (n>1) {
        for (int cont = 2; cont<=n; cont++) {
            if (cont%2==0){
                resp2 = resp2 + pow(((2*cont) - 1),((2*cont) - 1)) / pow((2*cont),(2*cont));
            }
            else {
                resp2 = resp2 * pow(((2*cont) - 1),((2*cont) - 1)) / pow((2*cont),(2*cont));
            }
        }
    }
    printf("O valor da série é %f", resp2);
    system("pause");
    return 0;
}
