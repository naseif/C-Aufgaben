#include <stdio.h>


// Diese Funktion führt sich selbst solange es aus, bis sie eine gewisse Kondition erreicht.  
void down(int n) {

    if (n < 0) {
        return;
    }

    printf("%d\n", n);
    down(n - 1);
}


void main() {
    down(20);
}