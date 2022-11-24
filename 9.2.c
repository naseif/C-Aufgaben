#include <stdio.h>
#include <stdlib.h>


void fragNachDreitZahlen(int *a, int *b, int *c) {
    printf("1. Zahl: ");
    scanf("%d", a);

    printf("2. Zahl: ");
    scanf("%d", b);

    printf("3. Zahl: ");
    scanf("%d", c);
}

void main() {
    int a,b,c;
    fragNachDreitZahlen(&a, &b, &c);
    int maxAundB;

    if (a < b) {
        maxAundB = b;
    } else {
        maxAundB = a;
    }

    int max = (maxAundB > c) ? maxAundB : c;
    printf("Die größte Zahlen von den Zahlen, die du eingegebn hast, ist: %d\n", max);
}