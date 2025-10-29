#include <stdio.h>
int main() {
    int a, b, x, y, UCLN, BCNN;
    printf("Nhap hai so nguyen duong: ");
    scanf("%d%d", &a, &b);
    x = a;
    y = b;
    while (x != y) {
        if (x > y) x -= y;
        else y -= x;
    }
    printf("BCNN cua %d va %d la: %d\n", a, b, (a * b) / x);
    return 0;
}
