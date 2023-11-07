#include <iostream>
#include <cmath>

int main() {
    int a, b, c; //Nombramos a las variables

    for (a = 1; a <= 20; a++) { //Bucle para a que busque números del 1 al 20
        for (b = a; b <= 20; b++) { //Bucle para b que busque números del 1 al 20
            double c_double = sqrt (a*a + b*b); //Teorema de pitágoras para hallar el valor c
            c = (int) c_double; //Convertimos el valor c_double en un entero truncado y que lo almacene en c

            
            if (c_double == c) { //Si c_double es igual a c, entonces se imprime el resultado
                if (a + b > c && a + c > b && b + c > a) { //Verificamos si se cumple el enunciado del teorema de pitágoras
                    printf ("%d - %d -%d\n", a,b,c); //Se imprime el resultado
                }
            }
        }
    }

    return 0;
}