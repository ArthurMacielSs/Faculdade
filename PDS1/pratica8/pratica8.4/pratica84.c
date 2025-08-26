#include <stdio.h>

struct instant {
  int hour;
  int minute;
  int second;
};

int instant_parse(const char* str, struct instant *init){
    int parametres= sscanf(str, "%d:%d:%d", &init->hour, &init->minute, &init->second);
    if(parametres==3){ //colocar o ponteiro certo (ela pede um endereço)
        //printf("acerto x %d parametros\n",parametres);
        return 0;
    }
    else{
        return 1;
       // printf("erro\n");
    }
}

int instant_check(struct instant i){
    if(((i.hour>=0)&&(i.hour<=23))&&((i.minute>=0)&&(i.minute<=59))&&((i.second>=0)&&(i.second<=59))){
        return 1;
    }
    else{
        return 0;
    }
}

int instant_compare(struct instant i1, struct instant i2){
    if(i1.hour<i2.hour){
        return -1;
    }
    else if(i1.hour==i2.hour){
        if(i1.minute>i2.minute){
            return 1;
        }
        else if(i1.minute<i2.minute){
            return -1;
        }
        else if(i1.minute==i2.minute){
              if(i1.second>i2.second){
            return 1;
        }
        else if(i1.second<i2.second){
            return -1;
        }
        else if(i1.second==i2.second){
            return 0;
        }
    }
}
    else if(i1.hour>i2.hour){
        return 1;
    }
}

void instant_read_vector(struct instant *v, int n){
    char string[100];
    int teste;
    for(int i=0;i<n;i++){
        fgets(string, 100, stdin);
        teste = instant_parse(string,&v[i]);
        if(teste==0){
        while(instant_check(v[i])!=1){
            printf("cordenadas invalidas \n");
            fgets(string, 100, stdin);
             teste = instant_parse(string,&v[i]);       
        }
    }

    }
}

struct instant instant_largest(const struct instant *v, int n){
    struct instant largest;
    largest.hour=v[0].hour;
    largest.minute=v[0].minute;
    largest.second=v[0].second;
    for(int i=1; i<n; i++){
        if(instant_compare(largest, v[i])<0){
            largest.hour=v[i].hour;
            largest.minute=v[i].minute;
            largest.second=v[i].second;
        }

    }
    return largest;
}


const int NINSTANTS = 5;

int main(void) {
  struct instant v[NINSTANTS];
  instant_read_vector(v, NINSTANTS);
  struct instant maior = instant_largest(v, NINSTANTS);
  printf("Maior instante: %02d:%02d:%02d\n",
         maior.hour, maior.minute, maior.second);
}