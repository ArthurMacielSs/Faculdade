int verificamatrizigual(int linhaA, int colunaA, int matrizA[linhaA][colunaA], int linhaB, int colunaB,int MatrizB[linhaB][colunaB]){
    int igual;
    if ((linhaA != linhaB) || (colunaA != colunaB)){
        return 0;
    }

    else{
        for (int i=0; i<linhaA; i++){
            for(int j=0; j<colunaA; j++){

                if(matrizA[i][j]!=MatrizB[i][j]){
                    return 0;

                }
                
            }
        }
    }
    return 1;
}
