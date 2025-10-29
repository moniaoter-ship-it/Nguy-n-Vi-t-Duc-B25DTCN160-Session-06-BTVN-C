#include <stdio.h>
int main() {
    float a, b; int c;
    printf("=== CHUONG TRINH TINH TOAN DON GIAN ===\n");
    printf("Nhap 2 so: "); scanf("%f%f", &a, &b);
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &c);
        if (c==1) printf("Tong = %.2f\n", a+b);
        else if (c==2) printf("Hieu = %.2f\n", a-b);
        else if (c==3) printf("Tich = %.2f\n", a*b);
        else if (c==4) b!=0 ? printf("Thuong = %.2f\n", a/b) : printf("Loi: Khong chia cho 0!\n");
        else if (c==5) printf("Cam on da su dung chuong trinh!\n");
        else printf("Lua chon khong hop le, vui long nhap lai!\n");
    } while (c!=5);
    return 0;
}
