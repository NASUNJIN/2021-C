#include <stdio.h>

int getInt() {
	int value;

	printf("Enter the integer: ");
	scanf("%d", &value);

	return value;
}

int factorial(int n) {
	//�ѷ����� ��� result ���
	return result;
}

int factorial(int n) {
	int result = 1;

	for (int i = 1; i <= n; i++)
		result *= i;

	return result;
}

int main() {
	int x = getInt();
	printf("%d! is %d.\n", x, factorial(x));
}