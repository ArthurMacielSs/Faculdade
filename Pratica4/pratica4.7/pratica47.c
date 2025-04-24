float arredonda (float num){
    int inteiro;
    float pontoflut;
    inteiro = num;
    pontoflut =num -inteiro;
    if(num>=0){
    if(pontoflut>0.5){
        inteiro++;
        return inteiro;
    }
    else{
    return inteiro;
    }                                                                                              -2.6;
    }
    else{
        
        if(pontoflut<-0.5){
            inteiro--;
            return inteiro;
        }
        else{
        return inteiro;

    }
}
}