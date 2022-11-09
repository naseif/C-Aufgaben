#include <stdio.h>
#include <math.h>


double geldBetragFordern() {

    double geldBetrag;
    puts("Bitte geben Sie einen Geldbetrag ein: ");
    scanf("%lf", &geldBetrag);
    return geldBetrag;

}

void main() {
    
    double geldBetrag = geldBetragFordern();
    const double EISKUGELPREIS = 1.2;
    int eiskugelAnzahl = trunc(geldBetrag / EISKUGELPREIS);


    switch(eiskugelAnzahl) {
        case 0: 
            puts("Sie können gar kein Eis kaufen. Ihr Geldbetrag ist nicht aussreichend.");
            break;

        default:
            printf("Sie können sich %d Eiskugeln leisten.\n", eiskugelAnzahl);
    }

}