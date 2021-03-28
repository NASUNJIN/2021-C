#include <stdio.h>
#include <math.h>


int main() {
	int two[10];

	for (int i = 0; i < 10; i++) {
		two[i] = pow(2, i);
		printf("two[%d] = 2^%d = %d\n",i,i,two[i]);
	}
}
