float calculamedia(int tamanho, float v[]){
    float media, soma;
    soma=0;
for(int i=0; i<tamanho; i++){
soma= soma + v[i];
}
media = soma/tamanho;
return media;
}