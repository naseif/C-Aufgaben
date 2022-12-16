#include "rect.h"
#include <stdio.h>

/*
    Captures user input 
*/

double getBreiteUndLaengeRechteck(double *breite, double *laenge) {
        printf("Bitte geben Sie die Breite ein: ");
        scanf("%lf", breite);

        printf("Bitte geben Sie die Länge ein: ");
        scanf("%lf", laenge);
}

/*
    Berechnet die Fläche eines Rechtecks
*/

double berechneFlaeche(double a, double b) {
    return a * b;
}

/*
    Berechnet den Umfang eines Rechtecks
*/

double berechneUmfang(double a, double b) {
    return 2 * a + 2 * b;
}

/*
    Gibt zurück, ob die Kantenlänge ein Quadrat oder Rechteck ist
*/
int istQuadrat(double a, double b) {
    if (a == b) {
        return 1;
    }

    return 0;
}

double berechneFlaeche3D(double a, double b, double c) {
    return 2 * a + 2 * b + 2 * c; 
}