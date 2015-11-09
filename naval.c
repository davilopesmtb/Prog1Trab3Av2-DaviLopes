/**************************************   
* Trabalho 3 de Programacao de Computadores I - Batalha Naval  
* Curso de Sistemas da informacao  
* Aluno: Davi Lopes dos Santos .'. - matricula: 0050013569
* Professor: Alex Salgado 
***************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mapa [5][5] = { {0,0,0,0,0},
    	                {0,0,1,1,0},
    					{0,1,0,1,0},
    					{0,1,0,0,1},
    				    {0,0,1,0,0}};

    int i, j; // i = linha j = coluna
    char jogo[5][5];
    char nome [90];
    int continuar = 1;
    int pontos = 0;
    printf("Qual o seu nome?\n");
    scanf("%s" ,nome);

    for(i=1; i<6; i++)
        {
            for(j=1; j<6; j++)
                {
                    jogo[i][j] = '.';
                }
        }

    //inicio
    printf("Entre com as coordenadas:\n\n");
    printf("Numero da linha:\n");
    scanf ("%d", &i);
    printf("Numero da Coluna:\n");
    scanf("%d", &j);
    if(mapa[i][j] == 1)
        {
            jogo[i][j] = 'X';
            pontos ++;
            printf("Bomba! ");
            printf("Você ganhou %d ponto(s)\n", pontos);
            printf("Deseja Continuar? 1 = Sim / 0= Não:");
            scanf("%d", &continuar);
        }
    else
        {
            jogo[i][j] = 'O';
            printf("Agua!!, que pena\n");
            printf("Deseja Continuar? 1 = Sim / 0= Não:");
            scanf("%d", &continuar);
        }
    for(i=1; i<6; i++)
            { 
    for(j=1; j<6; j++)
                {
    printf("%c  ", jogo[i][j]);
                }
    printf("\n");
            }
    // loop    
    while(continuar ==1)
       {
    printf("Numero da linha:\n");
    scanf ("%d", &i);
    printf("Numero da Coluna:\n");
    scanf("%d", &j);
    if(mapa[i][j] == 1)
        {
            jogo[i][j] = 'X';
            pontos ++;
            printf("Bomba! ");
            printf("Você ganhou %d ponto(s)\n", pontos);
            printf("Deseja Continuar? 1 = Sim / 0= Não:");
            scanf("%d", &continuar);
        }
    else
        {
            jogo[i][j] = 'O';
            printf("Agua!!, que pena\n");
            printf("Deseja Continuar? 1 = Sim / 0= Não:");
            scanf("%d", &continuar);
                }
    for(i=1; i<6; i++)
                    { 
    for(j=1; j<6; j++)
                        {
    printf("%c  ", jogo[i][j]);
                        }
    printf("\n");
                    }
       }
    printf("Olá %s" ,nome);
    printf(" você fez %d pontos.\n", pontos);
return 0;
}