#include <stdio.h>


void main() {
    int loops = 50;
    int anzahlValiderErgebnisse = 0;
    int fails = 0;


    for (int x = 0; x < loops; x++) {
        for (int y = 0; y < loops; y++) {
            int validePunktzahl = x * 2 + y * 3;

            if (validePunktzahl > 99) {
                fails += 1;
                continue;
            }

            anzahlValiderErgebnisse += 1;
        }
    }

    printf("Anzahl der theoritisch möglichen validen Basketball-Ergebnisse pro Mannschaft: %d\n", anzahlValiderErgebnisse);
}