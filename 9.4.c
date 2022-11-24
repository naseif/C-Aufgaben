#include <stdio.h>

int summeRekursiv(int n) {
    if (n > 0) {
        // printf("-> Beginne die Berechnung von %d\n", n);
        int zwischenwert = n + summeRekursiv(n-1);
        // printf("<- Fertig mit der Berechnung von %d (Zwischenwert: %d)\n", n, zwischenwert);
        return zwischenwert;
    }

    // printf("   ---   Bin bei 0\n");
    return 0;
}

void main() {
    int gesamtergebnis = summeRekursiv(17);
    printf("Gesamtsumme: %d\n", gesamtergebnis);
}
