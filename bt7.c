#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong\n");
        return 0;
    }
    int x = a, y = b;
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    printf("Uoc chung lon nhat (UCLN) cua %d va %d la: %d\n", a, b, x);
    return 0;
}
