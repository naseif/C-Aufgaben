#include <stdio.h>
#include <math.h>


int main () {
int pos = 1;

// Der Unterschied ist, dass bei einer do-while schleife das was im Block steht mindestenes einmal ausgeführt wird bevor die Condition evaluiert wird.
while(pos <= 10) {
    printf("%d\n", pos);
    pos++;
}

}
