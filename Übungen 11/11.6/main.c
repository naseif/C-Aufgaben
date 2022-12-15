#include <stdio.h>

int main() {
  int numbersArray[] = {1, 2, 3, 4, 5};

  /*
    To determine the size of your array in bytes, you can use the sizeof operator:

    int a[17];
    size_t n = sizeof(a);

    On my computer, ints are 4 bytes long, so n is 68.

    To determine the number of elements in the array, we can divide the total size of the array by the size of the array element. You could do this with the type, like this:

    int a[17];
    size_t n = sizeof(a) / sizeof(int);

    and get the proper answer (68 / 4 = 17), but if the type of a changed you would have a nasty bug if you forgot to change the sizeof(int) as well.

    So the preferred divisor is sizeof(a[0]) or the equivalent sizeof(*a), the size of the first element of the array.

    int a[17];
    size_t n = sizeof(a) / sizeof(a[0]);

    Another advantage is that you can now easily parameterize the array name in a macro and get:

    #define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

    int a[17];
    size_t n = NELEMS(a);
  */

  int n = sizeof(numbersArray) / sizeof(numbersArray[0]); // Warum ist C sooo dumm???????? 

  int *arrayPointer = numbersArray;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += *arrayPointer; 
    arrayPointer++;
  }

  printf("Summe aller Elemente im Array: %d\n", sum);

  return 0;
}
