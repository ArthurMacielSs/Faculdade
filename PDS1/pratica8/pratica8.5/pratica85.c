#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct atletas{
    char *nome;
    char *esporte;
    int idadade;
    float altura;
};

//pq n struct altetas a
// pq se for assim passa uma copia e não aloca
//usa dois ** pois acessa o apontado do ponteiro
   void initializestruct(struct atletas **a, int n) {
    *a = (struct atletas *)malloc(sizeof(struct atletas) * n);
    for (int i = 0; i < n; i++) {
        (*a)[i].nome = (char *)malloc(sizeof(char) * 100);
        (*a)[i].esporte = (char *)malloc(sizeof(char) * 100);
    }
}

// usa *a e não **a pois free struct não precisa modificar o ponteiro inicial e sim apenas apontar para onde ele aponta
void freestruct(struct atletas *a, int n) {
    for (int i = 0; i < n; i++) {
        free(a[i].nome);
        free(a[i].esporte);
    }
    free(a);  // libera o vetor principal
}

//ver como posso declarar 
void tiraBn (char a[100]){
    int tamanho = strlen(a);
    a[tamanho-1]='\0';
}


int main(int argc, char*argv[]){
    struct atletas *a;
    char usuarios[5][100]; 
    float maior;
    int maisVelho;

    //pq n a
    //se for a passa uma copia e só altera a cópia na função
    initializestruct(&a,5);

    for(int i=0; i<5;i++){
    fgets(usuarios[i],100, stdin);
    tiraBn(usuarios[i]);}

    for (int i=0; i<5; i++){
        sscanf(usuarios[i], "%s %s %d %f", a[i].nome, a[i].esporte, &a[i].idadade, &a[i].altura);
        
    }
    maior = a[0].altura;
    maisVelho=a[0].idadade;

    for (int i=1; i<5; i++){
        if(a[i].altura>maior){
            maior = a[i].altura;
        }
        if(a[i].idadade>maisVelho){
            maisVelho=a[i].idadade;
        }
        
    }
    for (int i=0; i<5; i++){
        if(maior==a[i].altura){
            printf("Mais alto: %s\n",a[i].nome);
        }
        if(maisVelho==a[i].idadade){
            printf("Mais velho: %s\n", a[i].nome);
        }
        
    }
    // não precisa passar o endereço de a, e sim apenas para onde ele aponta
    freestruct(a,5);
   


}


/*void f(struct atletas a) → passa por valor, não altera a do main

void f(struct atletas *a) → você pode alterar os campos de a, mas não realocar a

void f(struct atletas **a) → você pode alocar, realocar e alterar a*/
