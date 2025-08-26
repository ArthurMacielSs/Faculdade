float arredonda(float n) {
    int parteInteira;
    float parteFracionaria;

    parteInteira=n;
    parteFracionaria= n-parteInteira;
    if(parteFracionaria<0.25){
        return parteInteira;
    }
    else if((parteFracionaria>=0.25) && (parteFracionaria<0.75)){
        parteFracionaria = 0.5;
        return parteInteira+parteFracionaria;
    }
    else{
        parteInteira++;
        return parteInteira;
    }
}

void arredondaNotas(float *endNota1, float *endNota2, float *endNota3) {
    *endNota1=arredonda(*endNota1);
    *endNota2=arredonda(*endNota2);
    *endNota3=arredonda(*endNota3);
}