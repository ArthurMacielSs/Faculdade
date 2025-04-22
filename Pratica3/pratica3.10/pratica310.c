int parOuImpar(unsigned int number) {
    return ~(number & 1) & 1;
}
