#include <stdio.h>
#include <math.h>

int KiemTraSCP(int num) {
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

int DemSCP(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (KiemTraSCP(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i < n; i++) {
        if (KiemTraSCP(i)) {
            printf("%d ", i);
        }
    }
    printf("\nTong so chinh phuong nho hon %d la: %d\n", n, DemSCP(n));

    return 0;
}
