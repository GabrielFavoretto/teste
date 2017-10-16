#include <stdio.h>
#include <stdlib.h>
void sortear (int tabu[],int t);
void jogar (int matriz[5][6],int l,int c);
void verificar(int tabu[],int tt, int matriz[5][6], int tl,int tc);
int main()
{
srand( (unsigned)time(NULL) );
int i, j;
int tabu [60]={0};
int matriz [5][6];

sortear(tabu, 6);

jogar(matriz, 5,6);

 for (i=0;i<5;i++){
              printf("Jogo %d \n", i+1);
              for (j=0;j<6;j++){
              printf("jogo [%d][%d]= %d \n",i,j,matriz[i][j]);

              }
        }

verificar(tabu,60,matriz, 5, 6);



    return 0;
}
