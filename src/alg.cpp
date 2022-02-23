// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    for (int i = a; i > 0; i--) {
        if (a%i == 0 && b%i == 0) {
            break;       
        }      
    }
}
