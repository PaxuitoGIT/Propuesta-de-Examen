#include <iostream>
#include <cmath>

int main() {
    int a, b, c;

    for (a = 1; a <= 20; a++) {
        for (b = a; b <= 20; b++) {
            double c_double = sqrt (a*a + b*b);
            c = c_double;

            
            if (c_double == c) {
                if (a + b > c && a + c > b && b + c > a) {
                    printf ("%d - %d -%d\n", a,b,c);
                }
            }
        }
    }

    return 0;
}