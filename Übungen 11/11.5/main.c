#include <stdio.h>

int main() {
  int a = 5;
  int b = 10;
  int c = 15;

  int *ptra = &a;
  int *ptrb = &b;
  int *ptrc = &c;
  int *ptr_null = NULL;

  printf("Adresse von a: %p\n", &a);
  printf("Wert von a: %d\n", a);

  printf("Adresse von b: %p\n", &b);
  printf("Wert von b: %d\n", b);

  printf("Adresse von c: %p\n", &c);
  printf("Wert von c: %d\n", c);

  printf("Wert von ptra: %p\n", ptra);
  printf("Wert auf dem ptra zeigt: %d\n", *ptra);

  printf("Wert von ptrb: %p\n", ptrb);
  printf("Wert auf dem ptrb zeigt: %d\n", *ptrb);

  printf("Wert von ptrc: %p\n", ptrc);
  printf("Wert auf dem ptrc zeigt: %d\n", *ptrc);
  printf("Wert von ptr_null: %p\n", ptr_null);


  // Neue Werte über Pointer zuweisen
  *ptra = 20;
  *ptrb = 25;
  *ptrc = 30;

  // Zeige die Werte der Variablen an
  printf("Wert von a: %d\n", a);
  printf("Wert von b: %d\n", b);
  printf("Wert von c: %d\n", c);

  a = 35;
  b = 40;
  c = 45;

  printf("Wert von a (über Pointer): %d\n", *ptra);
  printf("Wert von b (über Pointer): %d\n", *ptrb);
  printf("Wert von c (über Pointer): %d\n", *ptrc);

  return 0;
}
