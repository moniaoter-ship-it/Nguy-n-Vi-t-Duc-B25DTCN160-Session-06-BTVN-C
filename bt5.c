#include <stdio.h>
int main() {
	int a ,f;
	for (a = 1; a <=9; a++) {
	printf("Bang cuu chuong %d:\n", a);	
	for (f = 1; f <= 10; f++) {
    printf("%d x %d = %d\n", a, f, a * f);
    }
    printf("\n"); 
    }
    return 0;
}
