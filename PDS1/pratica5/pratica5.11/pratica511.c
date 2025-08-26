float raiz(float x) {
    float y, teste, diferente;
     y = 1.0;
    while (1) {
     teste = y * y;
    diferente = teste - x;
        if (diferente > -0.01f && diferente < 0.01f) {
            return y;
        }
        if (teste < x) {
            y *= 1.05f;
        } else {
            y *= 0.95f;
        }
    }
}
