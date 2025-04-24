#include <stdio.h>
#include <stdbool.h> 

_Bool bissesto (int ano){
    if ((ano % 4==0) && (ano %100!=0)){
        return true;
    }
    else if (ano % 400 ==0)
    {
        return true;
    }
    else{
        return false;
    } 
}

_Bool verificaMes (int mes){
    if ((mes>=1) && (mes<=12)){
        return true;
    }
    else return false;
}

_Bool verificaDia( int dia, int mes, int ano){
    if (bissesto(ano)){
        if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
            if (dia>=1 && dia<=31){
                return true;
            }
            else{
                return false;
            }
        }
        else if(mes==4||mes==6||mes==9||mes==11){
            if (dia>=1 && dia<=30){
                return true;
            }
            else{
                return false;
            }
        }
        else if(mes==2){
            if (dia>=1 && dia<=29){
                return true;
            }
            else{
                return false;
            }
        }
        else {
            return false;
        }
        
    }
    else{
        if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
            if (dia>=1 && dia<=31){
                return true;
            }
            else{
                return false;
            }
        }
        else if(mes==4||mes==6||mes==9||mes==11){
            if (dia>=1 && dia<=30){
                return true;
            }
            else{
                return false;
            }
        }
        else if(mes==2){
            if (dia>=1 && dia<=28){
                return true;
            }
            else{
                return false;
            }
        }
        else {
            return false;
        }
    }

}

int main(int argc, char *argv[]){
    int dia, mes, ano;

    printf("digite o dia o mes e o ano\n");
    scanf("%d\n%d\n%d", &dia, &mes, &ano);
    if((dia<=0)||(mes<=0)||(ano<=0)){
        printf("Data invalida \n");
    }
    else{
    if(verificaDia(dia, mes,ano)==true && verificaMes(mes)==true){
        printf("Data valida \n");
    }
    else{
        printf("Data invalida \n");
    }
}
}