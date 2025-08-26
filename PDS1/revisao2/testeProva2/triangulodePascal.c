#include <stdio.h>

void pascal(int n, int temp[n][n]) {
    for (int i = 1; i < n; i++) {
        temp[i][0] = 1; 
        for (int j = 1; j < i; j++) {
            temp[i][j] = temp[i - 1][j - 1] + temp[i - 1][j]; 
        }
        temp[i][i] = 1; 
    }
}




void trianguloPascal(int n){
    int temp[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            temp[i][j]=0;
        }
    }

    temp[0][0]=1;
    
    //pascal(temp, n);
    pascal(n, temp);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(temp[i][j]!=0){
                printf("%d ", temp[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("digite o numero de linhas de pascal que você quer \n ");
    scanf("%d", &n);

    if (n > 0 && n <= 100) {
        trianguloPascal(n);
    } else {
        printf("Entre com um número entre 1 and 100.\n");
    }

    return 0;
}