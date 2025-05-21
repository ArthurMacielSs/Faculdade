#include <stdio.h>

int main(int argc, char **argv[]){
int nAlunosAeds1, nAlunosCalc1;


scanf("%d", &nAlunosAeds1);
int alunosAeds1[(nAlunosAeds1)];
for(int i=0; i<(nAlunosAeds1); i++){
    scanf("%d", &alunosAeds1[i]);
}


scanf("%d", &nAlunosCalc1);
int alunosCalc1[(nAlunosCalc1)];
for(int i=0; i<(nAlunosCalc1); i++){
    scanf("%d", &alunosCalc1[i]);
        
}

if(nAlunosAeds1>nAlunosCalc1){
    for(int i=0; i<(nAlunosAeds1); i++){
        for(int j=0; j<(nAlunosCalc1); j++){
            if(alunosAeds1[i]==alunosCalc1[j]){
                printf("%d\n", alunosAeds1[i]);
            }
    }
}
}

else if(nAlunosCalc1>nAlunosAeds1){
    for(int i=0; i<(nAlunosCalc1); i++){
        for(int j=0; j<(nAlunosAeds1); j++){
            if(alunosAeds1[i]==alunosCalc1[j]){
                printf("%d\n", alunosAeds1[i]);
            }
    }
}
}
else{
    for(int i=0; i<(nAlunosCalc1); i++){
        for(int j=0; j<(nAlunosAeds1); j++){
            if(alunosAeds1[i]==alunosCalc1[j]){
                printf("%d\n", alunosAeds1[i]);
            }
    }
}

}


}