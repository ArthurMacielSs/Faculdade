int potencia(int x, int y){
    if(y==0){
        return 1;
    }
    else{
        return x*potencia(x,y-1);
    }
}