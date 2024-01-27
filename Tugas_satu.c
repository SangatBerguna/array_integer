#include <stdio.h>

int main() {
    int n = 5;
    int arr[] = {18, 7, 22, 13, 25};
    float sum = 0.0, average;

    printf("Nilai-nilai array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("\nRata-rata dari nilai dalam array adalah: %.2f\n", average);

    return 0;
}
