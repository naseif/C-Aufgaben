#include <stdio.h>
#include "ctype.h"

void main() {
    int ziffern = 0;
    int buchstaben = 0;
    int leerzeichen = 0;
    
    char eingabe[100];
    printf("Bitte geben Sie Ihren Text ein: ");
    gets(eingabe);

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