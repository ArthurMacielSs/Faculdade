#include <stdio.h>

int main(int argc, char **argv[]){
int nAlunosAeds1, nAlunosCalc1, quantosDigitosTemMatricula;


scanf("%d", &nAlunosAeds1);
scanf("%d", &nAlunosCalc1);

int alunosAeds1[(quantosDigitosTemMatricula*nAlunosAeds1)], alunosCalc1[(quantosDigitosTemMatricula*nAlunosCalc1)];

for(int i=0; i<(quantosDigitosTemMatricula*nAlunosAeds1); i++){
    scanf("%d", &alunosAeds1[i]);
}
for(int i=0; i<(quantosDigitosTemMatricula*nAlunosCalc1); i++){
    scanf("%d", &alunosCalc1[i]);
}



}