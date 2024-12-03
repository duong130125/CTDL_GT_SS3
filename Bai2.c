#include <stdio.h>

// Hàm tính tổng các số từ n đến m
int sumRange(int n, int m)
{
    int sum = 0;
    for (int i = n; i <= m; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n, m;
    printf("Nhap so n: ");
    scanf("%d", &n);
    printf("Nhap so m: ");
    scanf("%d", &m);

    if (n > m)
    {
        printf("Gia tri n phai nho hon hoac bang m!\n");
    }
    else
    {
        printf("Tong cac so tu %d den %d la: %d\n", n, m, sumRange(n, m));
    }

    return 0;
}
