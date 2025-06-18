#include <stdio.h>
#include <string.h>

void posicionar_navios(char tabuleiro[12][12], char *navios[], int n){
    //char *nNavios[16];
    char nNavios[16];
    int linhasTabuleiro[n], colunasTabuleiro[n];
    char fragata[]= "fragata";
    char corveta[]= "corveta";
    char portaAviao[]= "porta-aviao";
    int t=0;
    for (int i=0; i<n; i++){
       //sscanf(navios[i], "%s %d %d", nNavios[i], linhas[i],colunas[i]);
       sscanf(navios[i], "%s %d %d", nNavios[i], linhasTabuleiro[i],colunasTabuleiro[i]);

    }

    for (int i=0; i<n;i++){
        for (int j=0; j<n; j++){
            if((i==linhasTabuleiro[t]) && (j==colunasTabuleiro[t])){
                if(strcmp(nNavios[t],corveta)==0){
                    tabuleiro[i][j]=='N';}
                else if(strcmp(nNavios[t], fragata)==0){
                    tabuleiro[i][j]='N';
                    tabuleiro[i][j+1]='N';
                }
                else if(strcmp(nNavios[t], portaAviao)==0){
                    tabuleiro[i][j]='N';
                    tabuleiro[i][j+1]='N';
                    tabuleiro[i][j+2]='N';
                }
                t++;
                }
                else{ 
                    tabuleiro[i][j]='.';
                }
            }
        }
    }


