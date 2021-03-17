#include <stdio.h>

#include <conio.h>

#include <math.h>

int main() {

            int a, b, tong, hieu, tich, thuong;

            printf("nhap so a");

            scanf("%d", &a);
            printf("nhap so b");
            scanf("%d", &b);

            tong = a+b;

            hieu = a-b;

            tich = a*b;

            thuong = a/b;

            printf("phep cong: %d\nphep tru: %d\nphep nhan: %d\nphep chia: %d", tong, hieu, tich, thuong);

            getch();

}
