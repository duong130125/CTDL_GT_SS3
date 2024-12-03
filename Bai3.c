#include <stdio.h>

// Hàm in dãy số Fibonacci
void printFibonacci(int n)
{
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d", a); // In phần tử đầu tiên
        }
        else if (i == 1)
        {
            printf(",%d", b); // In phần tử thứ hai
        }
        else
        {
            next = a + b; // Tính phần tử tiếp theo
            printf(",%d", next);
            a = b;    // Cập nhật giá trị a
            b = next; // Cập nhật giá trị b
        }
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Nhap so lan hien thi so Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Vui long nhap so nguyen duong!\n");
    }
    else
    {
        printFibonacci(n); // Gọi hàm in dãy Fibonacci
    }

    return 0;
}
