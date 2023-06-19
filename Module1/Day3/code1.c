#include <stdio.h>

void printNumbers(int start, int end) {
    for (int i = start; i <= end; i++) {
        printf("%d", i);
    }
}

void printSpaces(int count) {
    for (int i = 0; i < count; i++) {
        printf(" ");
    }
}

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        printNumbers(1, n - i);
        printSpaces(2 * i);
        for (int k=n-i;k>0;k--){
            printf("%d",k);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;  // Number of rows

    printPattern(n);

    return 0;
}