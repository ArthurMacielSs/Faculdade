#include <stdio.h>
#include <assert.h>

void calculateFine (int max, int recorded){
    if (recorded <= max){
        printf("Sem Infracao\n");
    }
    else if(recorded <= max*1.2){
        printf("Infracao Media\n");
    }
    else if(recorded > max*1.2 && recorded <= max*1.5){
        printf("Infracao Grave\n");
    }
    else{
        printf("Infracao Gravissima\n");
    }
}

int main( int argc, char *argv[]){
    // var declaration
    int maximumSpeed, speedRecorded;

    //user interaction
    printf("enter the maximum speed of the road and the speed recorded by the radar\n");
    scanf("%d \n %d", &maximumSpeed, &speedRecorded);

    //logical
    calculateFine(maximumSpeed, speedRecorded);

    return 0;
}