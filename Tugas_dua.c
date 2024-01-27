#include <stdio.h>

int main() {

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int panjangArray = sizeof(array) / sizeof(array[0]);

    printf("Elemen-elemen ganjil dari array: ");

    for (int i = 0; i < panjangArray; i++) {
        if (array[i] % 2 != 0) {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
