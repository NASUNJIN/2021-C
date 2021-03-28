#include <stdio.h> 

int getInt() {
	int value;

	printf("Enter the integer: ");
	scanf("%d", &value);

	return value;
}

int add(int x, int y) {
	return x + y;
}

int main() {
	int x = getInt();
	int y = getInt();

	int sum = add(x, y);
	printf("The sum is %d.\n", sum);
}