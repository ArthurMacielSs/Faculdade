int somaVetor(int v[], int n){
    int soma;
    if(n==0){
        return v[n];    
    } 
    else{
    
        v[n-1]=v[n]+ v[n-1];
        soma= somaVetor(v, (n-1));

       return soma;
    }
    
    
}