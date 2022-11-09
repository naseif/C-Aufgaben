#include <stdio.h>

void printSeason(int month) {

    switch(month) {
        case 12:
        case 1:
        case 2:
            puts("Winter");
            break;

        case 3 ... 5:
            puts("Spring");
            break;
        
        case 9 ... 11:
            puts("autumn");
            break;
        
        default:
            puts("unknown month");
}

}


int main() {
    
    printSeason(3);
    return 0;
}