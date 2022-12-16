#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main() {
    int ziffern = 0;
    int buchstaben = 0;
    int leerzeichen = 0;
    
    char eingabe[100];
    printf("Bitte geben Sie Ihren Text ein: ");
    // scanf speichert nur text ohne leerzeichen anscheinend. es hört auf die Eingabe zu speichern wenn im Text ein Leerzeichen gibt.
    fgets(eingabe, 100, stdin);

    for (int i = 0; i < strlen(eingabe); i++) {
        if (isdigit(eingabe[i])) {
            ziffern++;
        } else if (isalpha(eingabe[i])){
        buchstaben++;
       } else if (isspace(eingabe[i])) {
        leerzeichen++;
       }
    }    

    printf("Ziffern: %d\n", ziffern);
    printf("Buchstaben: %d\n", buchstaben);
    printf("Leerzeichen: %d\n", leerzeichen);
    
}