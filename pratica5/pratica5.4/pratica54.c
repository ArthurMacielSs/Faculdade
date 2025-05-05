#include <stdio.h>

int main(int argc, char *argv[]){
	float um, maior, menor, temp;
	int i;
	scanf("%f", &um);
	menor = um;
	maior =um;
	for(i=0; i<14; i++){
        scanf("%f", &temp);
        if (temp>maior)
        {
            maior =temp;
        }
         if (temp<menor)
        {
            menor = temp;
        }  
	} 
    printf(" Maior: %.0f\n Menor: %.0f \n", maior, menor);
	}
