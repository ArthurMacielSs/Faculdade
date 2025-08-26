#include <stdio.h>
#include <string.h>

#define MAXTAM 1000

int main(int argc, char *argv[]){

    char *line, *bigLine;
   
   fgets(line,MAXTAM, stdin);
   printf("%s\n", line);
}