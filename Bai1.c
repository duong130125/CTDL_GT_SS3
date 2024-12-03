#include <stdio.h>

// Hàm tính giai thừa và trả về kiểu int
int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("So nhap vao phai la so nguyen duong!\n");
    }
    else
    {
        if (n > 12)
        {
            printf("Giai thua qua lon de luu trong kieu int!\n");
        }
        else
        {
            printf("Giai thua cua %d la: %d\n", n, factorial(n));
        }
    }

    return 0;
}
