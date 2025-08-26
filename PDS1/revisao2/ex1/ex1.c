#include <stdio.h>
#include <string.h>

// Protótipo da sua função
void processar_dados_sensores(const char* dados_brutos, float* temperatura, float*
umidade) {
int tamanho=strlen(dados_brutos);
*temperatura=0.0f;
*umidade=0.0f;

for(int i=0; i<=tamanho; i++){
    if(dados_brutos[i]=='T'){
        sscanf(dados_brutos, "T%f", temperatura);
        //printf("f%f u%f\n", *temperatura, *umidade);
        for (int j =i; j<=tamanho; j++){
            if (dados_brutos[j]=='U')
            {
                sscanf(dados_brutos, " T%f U%f", temperatura, umidade );
                //printf("f%f u%f\n", *temperatura, *umidade);

            }
            
        }
        
    }
    else if(dados_brutos[i]=='U') {
        sscanf(dados_brutos, "U%f", umidade);
        //printf("f%f u%f\n", *temperatura, *umidade);
        for(int j=i; j<=tamanho; j++){
            if(dados_brutos[j]=='T'){
                sscanf(dados_brutos, "U%f T%f", umidade, temperatura);
              //  printf("f%f u%f\n", *temperatura, *umidade);
            }
        }
    }
}

}



int main() {
 float temp;
 float umid;
 processar_dados_sensores("T25.5 U60", &temp, &umid);
 printf("Temp=%.1f, Umid=%.1f\n", temp, umid); // Temp=25.5, Umid=60.0
 processar_dados_sensores("U11 T55", &temp, &umid);
 printf("Temp=%.1f, Umid=%.1f\n", temp, umid); // Temp=55.0, Umid=11.0
 processar_dados_sensores("U66.1 T99.8", &temp, &umid);
 printf("Temp=%.1f, Umid=%.1f\n", temp, umid); // Temp=99.8, Umid=66.1
 processar_dados_sensores("U66.1", &temp, &umid);
 printf("Temp=%.1f, Umid=%.1f\n", temp, umid); // Temp=0.0, Umid=66.1
 processar_dados_sensores("T99.8", &temp, &umid);
 printf("Temp=%.1f, Umid=%.1f\n", temp, umid); // Temp=99.8, Umid=0.0
 return 0;
}