#include <stdio.h>

int main() {
    int n;
    printf("nhap so phan tu mang: ");
    scanf("%d", &n);

    int array[n];
    printf("Nhap cac phan tu mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


    return 0;
}