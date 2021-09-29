#include <stdio.h>
#include <string.h>

int fibonacci(int *inicial,int *Seg_inicial,int *Generador)
{
    *inicial=*Seg_inicial;
    *Seg_inicial=*Generador;
    *Generador= *inicial + *Seg_inicial;
    return *Generador;
}

int main()
{
    int n,inicial=0, Seg_inicial=1, Generador=0;

    printf("Ingrese el numero de computadores infectador por dias:");
    scanf("%i",&n);
    for (int i=0;i<n;i++)
    {
        printf("%d\n",fibonacci(&inicial,&Seg_inicial,&Generador));
    }
    return 0;
}