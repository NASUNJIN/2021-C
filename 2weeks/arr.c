#include <stdio.h>

int main() {
	int mat[3][3] = { {5,6,1},{0,2,6},{3,9,2} };
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}