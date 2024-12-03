#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm loại bỏ khoảng trắng và ký tự không phải chữ cái/số
void cleanString(char str[], char cleanStr[])
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalnum(str[i]))
        {                                    // Giữ lại chữ cái và số
            cleanStr[j++] = tolower(str[i]); // Chuyển về chữ thường
        }
    }
    cleanStr[j] = '\0'; // Kết thúc chuỗi sạch
}

// Hàm đệ quy kiểm tra chuỗi đối xứng
int isPalindrome(char str[], int start, int end)
{
    if (start >= end)
    {
        return 1; // Điều kiện dừng: Nếu đã kiểm tra hết, trả về true
    }

    if (str[start] != str[end])
    {
        return 0; // Nếu khác nhau, không phải Palindrome
    }

    // Gọi đệ quy cho phần giữa của chuỗi
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    char str[100], cleanStr[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự xuống dòng nếu có
    str[strcspn(str, "\n")] = '\0';

    cleanString(str, cleanStr); // Làm sạch chuỗi

    if (isPalindrome(cleanStr, 0, strlen(cleanStr) - 1))
    {
        printf("Palindrome valid\n");
    }
    else
    {
        printf("Palindrome invalid\n");
    }

    return 0;
}
