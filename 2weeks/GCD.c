#include <stdio.h>

/*int GCD(int x, int y) {
	int min, gcd;

	if (x < y) min = x;
	else min = y;
	
		for (int i = 1; i < min+1; i++)
		{
			if ((x % i == 0) && (y % i == 0))
				gcd = i;
		}

		return gcd;
}*/
int GCD(int x, int y) {
	int min, gcd;

	if (x < y) min = x;
	else min = y;

	for (int i = min; i > 0; i--)
	{
		if ((x % i == 0) && (y % i == 0))
		{
			gcd = i;
			break;
		}
	}

	return gcd;
}

int main() {
	int a, b;

	printf("�ִ������� ���� 2���� ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);

	printf("%d�� %d�� �ִ������� %d\n", a, b, GCD(a, b));
}