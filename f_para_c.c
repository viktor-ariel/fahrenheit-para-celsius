#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {

    float fa, c;

    system("cls");

    printf("Ola, hoje esta fazendo quantos graus em  Fahrenheit? ");
    scanf("%f", &fa);
    system("cls");


    c=(fa-32) * 5/9;
    printf ("Hoje esta fazendo %.2f Celsius \n \n", c);

    system("pause");


}
