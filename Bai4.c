#include <stdio.h>
#include <string.h>

// Hàm đệ quy đảo ngược chuỗi
void reverseString(char str[], int start, int end)
{
    if (start >= end)
    {
        return; // Điều kiện dừng: khi chỉ số bắt đầu >= chỉ số kết thúc
    }

    // Hoán đổi ký tự đầu và cuối
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Gọi đệ quy cho phần còn lại của chuỗi
    reverseString(str, start + 1, end - 1);
}

int main()
{
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự xuống dòng nếu có
    str[strcspn(str, "\n")] = '\0';

    reverseString(str, 0, strlen(str) - 1);

    printf("Chuoi dao nguoc: %s\n", str);

    return 0;
}
