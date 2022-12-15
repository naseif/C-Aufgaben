#include "rect.h"
#include <stdio.h>


int main() {
    double breite, laenge;
    getBreiteUndLaengeRechteck(&breite, &laenge);
    printf("Umfang: %f\n", berechneUmfang(breite, laenge));
    printf("Fläche: %f\n", berechneFlaeche(breite, laenge));
    printf("Deine Kantenlänge ergeben ein: %s\n", istQuadrat(breite, laenge) == 1 ? "Quadrat" : "Rechteck");
}