/*
Autor: Laura Farias
Descrição: Solução do problema G da Maratona de Programação interfatecs 2025
*/
#include <stdio.h>

//seção de prototipação
void minutos(int, int, int, int);

main()
{

    int ds, ys, dm, ym;

    scanf("%d %d", &ds, &ys);
    scanf("%d %d", &dm, &ym);

    minutos(ds, ys, dm, ym);

}//fim do programa

void minutos(int ds, int ys, int dm, int ym)
{

    int retornoS = ys - ds;
    int retornoM = ym - dm;

    while(1)
    {
        if (retornoS == retornoM)
        {
            printf("%d", retornoS);
            break;
        }
        else
        {
           if(retornoS < retornoM)
           {
               retornoS = retornoS + ys;
           }
           else
           {
               retornoM = retornoM + ym;
           }
        }
    }    
}
