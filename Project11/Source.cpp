#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, a = 2;
	scanf("%d", &x);
	printf("Factoring Result : ");
	while ((x > 1) && (a < x)) {
		if (x % a == 0) {
			printf("%dx", a);
			x = x / a;
			a = 2;
		}
		else a = a + 1;
	}
	printf("%d\n", a);
	return 0;
}