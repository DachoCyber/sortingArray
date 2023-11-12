#include <stdio.h>

void swap(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void sort(int a[], int n) {

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[j] > a[i]) {
                swap(a + i, a + j);
            }
        }
    }
}

int main() {

        int a[100];
        int n;
        printf("Unesite broj clanova niza:\n");
        scanf("%d", &n);

        printf("Unesite niz:\n");
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        printf("Sortirani niz je:\n");
        sort(a, n);
        for(int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }

        return 0;
}
