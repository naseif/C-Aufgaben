#include <stdio.h>
#include <math.h>

int fakultaet(int n) {
    int laeufer = 1;

    for (int i = 1; i <= n; i++) {
        laeufer = laeufer * i;
    }

    return laeufer;
}

void main() {
    printf("%d\n", fakultaet(4));
}
