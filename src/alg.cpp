// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    int c = 0;
    for (int i = a; i > 0; i--) {
        if (a%i == 0 && b%i == 0) {
            c = i;
            break;       
        }      
    }
    return c;
}
