#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> 

bool checkIfContainsZero(int number) {

    char str[4];
    sprintf(str, "%d", number); // integer to string
    bool isZero = false;

    for (int i = 0; i < strlen(str); i++){
        if (str[i] == '0') {
            isZero = true;
            break;
        }
    }
    return isZero;
}

void printAlle4moeglicheDigits() {
    for (int i=1000; i<=9999; i++){
        printf("%04d\n", i);
    }
}

void printAlle4moeglicheDigitsOhneNull() {
    for (int i=1000; i<=9999; i++){
        if (checkIfContainsZero(i) == true) {
            continue;
        } 
        printf("%04d\n", i);
    }
}


void main() {
    printAlle4moeglicheDigitsOhneNull();
}