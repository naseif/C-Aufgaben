#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h> 
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int zufallszahlVomSystemHolen () {
    int systemZahl = rand() % 5 + 1;
    return systemZahl;
}

bool containsOnlyDigits(char eingabe[100]) {
    for (int i = 0; i < strlen(eingabe); i++) {
        if (!isdigit(eingabe[i])) {
            return false;
        }
    }

    return true;
}

int eingabeAusZiffernLesen(char nachricht[100]) {
    char eingabe[100];
    char *ptr;

    do {
        puts(nachricht);
        scanf("%99s", &eingabe[0]);

        if (!containsOnlyDigits(eingabe)) {
            puts("Sie müssen eine Zahl eingeben und kein Buchstabe Sie Dumm wie Brot Kopf");
        }
    } while (!containsOnlyDigits(eingabe));

    return strtol(eingabe, &ptr, 10);
}

void main() {
    srand(time(NULL));
    int zufallszahl = zufallszahlVomSystemHolen();
    int benutzerZahl;
    do {
        benutzerZahl = eingabeAusZiffernLesen("Bitte geben Sie eine Zahl zwischen 1 und 5 ein: ");
        if (benutzerZahl != zufallszahl) {
            puts("Sie lagen aber falsch HAHAHAHAH, Versuchen Sie nochmal :P");
        }
    } while(benutzerZahl != zufallszahl);

    puts("Sie haben die Zahl erraten mein Herr oder meine Frau, je nachdem! Gratulation!!!!");
}