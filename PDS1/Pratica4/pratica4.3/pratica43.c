#include <stdio.h>

void allowsRetirement (char gender, int age, int workTime){
if(gender=='M'){
    if(age>=65){
        printf("Pode aposentar\n");
    }
    else if(age>=60 && workTime>=35) {
        printf("Pode aposentar\n");
    }
    else {
        printf("Nao pode aposentar\n");
    }
}
if(gender=='F'){
    if(age>=60){
        printf("Pode aposentar\n");
    }
    else if(age>=55 && workTime>=30) {
        printf("Pode aposentar\n");
    }
    else {
        printf("Nao pode aposentar\n");
    }

   }
}

int main(int argc, char *argv[]){
    //var declaration
    char gender;
    int age, workTime;

    //user interaction
    //printf("enter your gender (M/F), your age, and your contribution time \n");
    scanf("%d\n%d\n%c", &age, &workTime,&gender );


    //logic
    allowsRetirement(gender,age,workTime);


}