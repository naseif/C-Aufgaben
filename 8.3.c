#include <stdio.h>
#include <math.h>

int main() {

    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d: gerade\n", i);
        } else {
            printf("%d: ungerade\n", i);
        }
    }
}