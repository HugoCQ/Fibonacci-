#include <stdio.h>
#include <string.h>

int fibonacci(int *inicial,int *Seg_inicial,int *Generador)
{
    *inicial=*Seg_inicial;
    *Seg_inicial=*Generador;
    *Generador= *inicial + *Seg_inicial;
    return *Generador;
}
int ciclos(int *a,int *b,int *c,int *d )
{
    int anchoDias = -15;
    int anchoPCs = -15;
    printf("+---------------+---------------+\n");
    printf("|Computadoras infectadas por dia|\n");
    printf("+---------------+---------------+\n");
    printf("|%*s|%*s|\n", anchoDias, " Dia", anchoPCs,
    " PC");
    printf("+---------------+---------------+\n");
    for (int i=0;i<*a;i++)
    {
        printf("| Dia: %-9i| %-14d|\n",i+1,fibonacci(b,c,d));
        
    }
    printf("+---------------+---------------+\n");
}

int main(void)
{
    system("cls");
    int n,inicial=0, Seg_inicial=1, Generador=0;

    printf("Ingrese el numero de computadores infectador por dias:");
    scanf("%i",&n);
    ciclos(&n,&inicial,&Seg_inicial,&Generador);
    return 0;
}