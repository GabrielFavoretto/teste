void sortear (int tabu[],int t){
    int i;
    for (i=0;i<t;i++){
        int num=0;
        num =rand()%60;
        if (tabu[num]==1){
            tabu[num]=1;

        }
        else {
            tabu[num]=1;
        }
    }

}

void jogar (int matriz[5][6],int l,int c){
int i;
int j;
int k;
printf("digite os numeros jogados  \n");
for (i=0;i<l;i++){
        printf("Proximo Jogo \n");
  for (j=0;j<c;j++){
        printf("jogo [%d][%d]=",i,j);
        scanf("%d", &matriz[i][j]);

  }


}



  void verificar(int tabu[],int tt, int jogar[5][6], int tl,int tc){
  int i,k=0;
  int n[6];
  int j;
  int t;
  //for (i=0;i<tt;i++){
    //for (j=0;j<tl;j++){
      //  for (t=0;t<tc;t++){
        //    if (i ==jogar[j][t]){

          //     printf("acertou o jogo %d %d na posiçao %d \n",jogar[j][t], i+1);
           // }
      //  }
    //}
    for (i=0;i<tt;i++){

        printf(" [%d]=%d \n ",i+1,tabu[i]);
    }

    for (i=0;i<tt;i++){
        if(tabu[i]==1){
            n[k] = i + 1;
            k++;

        }
    }
for(k=0;k<6;k++){
    for (i=0;i<5;i++){
            for (j=0;j<6;j++){

                    if(n[k] == jogar[i][j]){
                        printf("Vc acertou o numero %d no jogo %d na posicao %d \n",n[k], i, j);
                    }
                }



    }
}
  }
