int codigoDeArea(unsigned int number) {
    return number / 100000000;
}

int parEmImpar(unsigned int number) {
    return number | 1;
}

int par(unsigned int number) {
    return !(number & 1);
}