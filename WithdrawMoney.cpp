#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);
    while (test--) {
        int n, S = 0;
        scanf("%d", &n);
        
        S += n / 1000;
        n %= 1000;
        
        S += n / 500;
        n %= 500;
        
        S += n / 200;
        n %= 200;
        
        S += n / 100;
        n %= 100;
        
        S += n / 50;
        n %= 50;
        
        S += n / 20;
        n %= 20;
        
        S += n / 10;
        n %= 10;
        
        S += n / 5;
        n %= 5;
        
        S += n / 2;
        n %= 2;
        
        S += n / 1;
        
        printf("%d\n", S);
    }
    return 0;
}