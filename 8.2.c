#include <stdio.h>
#include <math.h>


int main () {

    // 1 - 100 neue Zeile
    for (int i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }

    // 1- 100 eine Zeile
    puts("========= In einer Zeile ==========");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }

    puts("\n");

    puts("========= 100 zu 1 ==========");
    for (int i = 100; i >= 1; i--) {
        printf("%d ", i);
    }
   
   puts("\n");

    // 
   int numbers =  1;

   for (int i = 1; i <= 20; i++ ) {
    printf("%d ", numbers);
    numbers *= 2;
   }


}
