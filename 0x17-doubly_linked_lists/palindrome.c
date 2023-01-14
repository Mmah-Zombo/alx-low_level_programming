#include <stdio.h>

int main() {
    int i, j, product, largest = 0;

    for (i = 100; i <= 999; i++) {
        for (j = i; j <= 999; j++) {
            product = i * j;
            if (product > largest) {
                int reverse = 0, temp = product;
                while (temp > 0) {
                    reverse = reverse * 10 + temp % 10;
                    temp /= 10;
                }
                if (reverse == product) {
                    largest = product;
                }
            }
        }
    }
    printf("%d", largest);
    return (0);
}
