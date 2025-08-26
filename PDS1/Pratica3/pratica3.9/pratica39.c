unsigned int soma1SePar(unsigned int number) {
    return number + ((number & 1) ^ 1);
}