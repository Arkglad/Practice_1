#include <stdio.h>
#include <math.h>

//Practice_1
//№12

int main()
{
    float z, t, y, x, pi = 3.14; //z = 1, t = 2
    printf ("Введите z и t:\n");
    scanf ("%f%f", &z, &t);
    y = tan((t + z) * pi / 180);
    x = (8 * pow(z, 2) + 1) / (y * exp(t) + pow(t , 2));
    printf ("\nРезультаты: \nx = %5.2f\n", x);
    return 0;
}
