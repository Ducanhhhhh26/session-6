#include <stdio.h>

int main() {
    int number;
    int count = 0; // Kh?i t?o bi?n count b?ng 0
    int i;

    printf("Moi ban nhap vao so nguyen bat ki: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    if (count == 2) { // S? nguyên t? ch? có ğúng 2 ı?c là 1 và chính nó
        printf("So %d la so nguyen to\n", number);
    } else {
        printf("So %d khong phai la so nguyen to\n", number);
    }

    return 0;
}

