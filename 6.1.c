#include <stdio.h>
#include <math.h>
#define PI 3.141592654
#include <stdbool.h>

int getBreiteUndLaengeRechteck(int *breite, int *laenge) {
        printf("Bitte geben Sie die Breite ein: ");
        scanf("%d", breite);

        printf("Bitte geben Sie die Länge ein: ");
        scanf("%d", laenge);
}


int getBreiteUndLaengeKreis(int *radius) {
        printf("Bitte geben Sie den Radius ein: ");
        scanf("%d", radius);
}


int berechneUmfangUndFlaecheRechteck(int breite, int laenge) {

    int umfang = 2 * breite + 2 * laenge;
    printf("Umfang: %d\n", umfang);
    
    int flaecheninhalt = breite * laenge;
    printf("Flächeninhalt: %d\n", flaecheninhalt);
}


int berechneUmfangUndFlaecheKreis(int radius) {

    double umfang = PI * pow(radius, 2);
    printf("Umfang: %f\n", umfang);

    double flaeche = 2 * PI * radius;
    printf("Fläche: %f\n", flaeche);
}


int main(void) {

    do {
    int userChoice;
    printf("==============================================\n");
    printf("\t C Programmieren - Aufgabe 6.1!\t\n");
    printf("==============================================\n");
    printf("\nBitte wählen Sie einer dieser Optionen aus: \n");
    printf("\n1. Rechteck Umfang und Flächeninhalt Berechnung \n");
    printf("2. Kreis Umfang und Fläche Berechnung \n");
    printf("Eingabe: ");
    scanf("%d", &userChoice);

    if (userChoice == 1) {

    int breite, laenge, radius;
    getBreiteUndLaengeRechteck(&breite, &laenge);
    berechneUmfangUndFlaecheRechteck(breite, laenge);
    break;
    } else if (userChoice == 2) {

    int radius;
    getBreiteUndLaengeKreis(&radius);
    berechneUmfangUndFlaecheKreis(radius);
    break;
    } else {
        printf("\nError: Ungültige Eingabe, Bitte wählen Sie entwerder 1 oder 2.\n\n");
    }
    } while (true);

}