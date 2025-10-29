#include <stdio.h>
int main() {
    int a, b, c, chon, daNhap = 0;
    do {
        printf("\n1.Nhap 3 so\n2.Tong\n3.Trung binh\n4.Nho nhat\n5.Lon nhat\n6.Thoat\nChon: ");
        scanf("%d", &chon);
        switch (chon) {
            case 1:
                printf("Nhap 3 so: ");
                scanf("%d%d%d", &a, &b, &c);
                daNhap = 1;
                break;
            case 2:
                if (!daNhap) { printf("Nhap 3 so truoc!\n"); break; }
                printf("Tong = %d\n", a + b + c);
                break;
            case 3:
                if (!daNhap) { printf("Nhap 3 so truoc!\n"); break; }
                printf("Trung binh = %.2f\n", (a + b + c) / 3.0);
                break;
            case 4:
                if (!daNhap) { printf("Nhap 3 so truoc!\n"); break; }
                printf("Nho nhat = %d\n", (a < b ? (a < c ? a : c) : (b < c ? b : c)));
                break;
            case 5:
                if (!daNhap) { printf("Nhap 3 so truoc!\n"); break; }
                printf("Lon nhat = %d\n", (a > b ? (a > c ? a : c) : (b > c ? b : c)));
                break;
            case 6:
                printf("Thoat!\n");
                break;
            default:
                printf("Khong hop le!\n");
        }
    } while (chon != 6);
    return 0;
}
