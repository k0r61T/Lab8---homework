#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    printf("�������� ������� �� Lab8. ������� 3. ������� 6\n");
    printf("��������� � �������������� ����� for �������� ����,\n��� �������� ������������� �������� a � n.\na * (a-n) * (a-2n) ... (a-n^2)\n");
    int a, n;
    long long y = 1;
    printf("\n������� ����� �������� a:\n");
    scanf("%d", &a);
    printf("������� ����� �������� n:\n");
    scanf("%d", &n);

    printf("\n���������� �� ������� a * (a-n) * (a-2n) ... (a-n^2):\n");
    for (int i = 0; i <= n; i++) {
        int x = a - i * n;  
        long long o = y;
        y = y * x;
        printf("%d ��������: %lld * %d = %lld\n", i + 1, o, x, y);
    }
    printf("\n�����: %lld\n", y);
    return 0;
}
