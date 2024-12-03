#include <stdio.h>

// Hàm đệ quy tính tổng các phần tử trong mảng
int sumArray(int arr[], int n)
{
    if (n == 0)
    {
        return 0; // Điều kiện dừng: mảng rỗng, tổng là 0
    }

    return arr[n - 1] + sumArray(arr, n - 1); // Tổng phần tử cuối + tổng phần còn lại
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Tong cua arr1: %d\n", sumArray(arr1, n1));

    int arr2[] = {-1, 4, 2, 6, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Tong cua arr2: %d\n", sumArray(arr2, n2));

    int arr3[] = {};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Tong cua arr3: %d\n", sumArray(arr3, n3));

    return 0;
}
