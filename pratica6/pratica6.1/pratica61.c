int contacarateresalfa(char *a, int tam) {
    int conta = 0;
    for (int i = 0; i <= tam; i++) {
        switch (a[i]) {
            
            case 48: case 49: case 50: case 51: case 52:
            case 53: case 54: case 55: case 56: case 57:
            case 65: case 97: 
            case 66: case 98: 
            case 67: case 99: 
            case 68: case 100:
            case 69: case 101:
            case 70: case 102:
            case 71: case 103:
            case 72: case 104:
            case 73: case 105:
            case 74: case 106:
            case 75: case 107:
            case 76: case 108:
            case 77: case 109:
            case 78: case 110:
            case 79: case 111:
            case 80: case 112:
            case 81: case 113:
            case 82: case 114:
            case 83: case 115:
            case 84: case 116:
            case 85: case 117:
            case 86: case 118:
            case 87: case 119:
            case 88: case 120:
            case 89: case 121:
            case 90: case 122:
                conta++;
                break;

            default:
                break;
        }
    }
    return conta;
}
