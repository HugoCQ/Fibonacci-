#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fibonacci(int *inicial,int *Seg_inicial,int *Generador)
{
    *inicial=*Seg_inicial;
    *Seg_inicial=*Generador;
    *Generador= *inicial + *Seg_inicial;
    return *Generador;
}

void virus(void)
{
    printf("\t                        **                                       \n");
    printf("\t                       ****                                       \n");
    printf("\t                      ******                                      \n");
    printf("\t                     **|  | **                                   \n");
    printf("\t                   **|| || |||**                                 \n");   
    printf("\t                ** ------------- **                              \n");
    printf("\t               *  *| ||||||||| |*  *                             \n");
    printf("\t             ***********   ***********                           \n"); 
    printf("\t             || ||   | || | ||   || ||                           \n");
    printf("\t          ------   ------------   -------                       \n");
    printf("\t   ||    ||       -------------        ||      ||               \n");
    printf("\t   **    || * * []| | |   | | |[] * *  ||      **               \n");
    printf("\t  ****   || * * []| | |   | | |[] * *  ||     ****              \n");
    printf("\t  *  *   || * * []| | |   | | |[] * *  ||     *  *              \n");
    printf("\t  --------------------------------------------------           \n");
    printf("\t  --------------------------------------------------           \n\n\n");
}

int ciclos(int *a,int *b,int *c,int *d )
{
    int anchoDias = -15;
    int anchoPCs = -15;
    printf("+---------------+---------------+\n");
    printf("|COMPUTADORES INFECTADOS POR DIA|\n");
    printf("+---------------+---------------+\n");
    printf("|%*s|%*s|\n", anchoDias, " DIA", anchoPCs,
    " PC");
    printf("+---------------+---------------+\n");
    for (int i=0;i<*a;i++)
    {
        printf("| DIA: %-9i| %-14d|\n",i+1,fibonacci(b,c,d));
        
    }
    printf("+---------------+---------------+\n\n");
}

int main(void)
{
    system("cls");
    virus();
    int a,b,c,g=0,inicial=0, Seg_inicial=1, Generador=0;
    printf("INGRESE LOS DIAS QUE QUIERE VERIFICAR LA CANTIDAD DE COMPUTADORES INFECTADOS -> ");
    scanf("%i",&a);
    printf("\n");
    ciclos(&a,&inicial,&Seg_inicial,&Generador);
    printf("    ¿DESEA INGRESAR MAS DIAS?    \n");
    printf("        |SI=1|----|NO=2|    \n");
    scanf("%i",&b);
    if (b==1)
    {
        while (g==0)
        { 
            
            a=0;
            inicial=0; 
            Seg_inicial=1; 
            Generador=0;
            b=0;
            system("cls");
            printf("INGRESE MAS DIAS QUE QUIERE VERIFICAR LA CANTIDAD DE COMPUTADORES INFECTADOS -> ");
            scanf("%i",&a);
            printf("\n");
            ciclos(&a,&inicial,&Seg_inicial,&Generador);
            printf("    ¿DESEA INGRESAR MAS DIAS?    \n");
            printf("        |SI=1|----|NO=2|    \n");
            scanf("%i",&b);
            if(b==1)
            {
                continue;
            }
            else if(b==2)
            {
                printf("--------------------ADIOS-------------------\n");
                printf("------BY: HUGO CONCHA AND FIDEL CARTES------\n");
                break;
            }
        }
    }
    else 
    {
        printf("--------------------ADIOS-------------------\n");
        printf("------BY: HUGO CONCHA AND FIDEL CARTES------\n");
    }
    return 0;
}
