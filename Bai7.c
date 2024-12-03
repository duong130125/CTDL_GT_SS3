#include <stdio.h>

// Hàm đệ quy tính tổ hợp C(n, k)
int combination(int n, int k)
{
    // Điều kiện dừng: C(n, 0) = 1 và C(n, n) = 1
    if (k == 0 || k == n)
    {
        return 1;
    }
    // Đệ quy theo công thức: C(n, k) = C(n-1, k-1) + C(n-1, k)
    return combination(n - 1, k - 1) + combination(n - 1, k);
}

int main()
{
    int n, k;

    // Nhập vào n và k
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap k: ");
    scanf("%d", &k);

    // Tính tổ hợp C(n, k) và in kết quả
    printf("C(%d, %d) = %d\n", n, k, combination(n, k));

    return 0;
}
