#include <stdio.h>      /* printf */
#include <math.h>       /* isgreater, log */
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    double hasil, x;

    x = 13.0;
    hasil = log(x);

    if (isgreater(hasil, 2.0)) {
        printf("log(%0.1f) is positive", x);
    } else {
        printf("log(%0.1f) is not positive", x);
    }

    _getch();
    return 0;
}