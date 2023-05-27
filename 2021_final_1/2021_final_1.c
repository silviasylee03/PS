//N factorial

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int factorial(int N)
{
	if (N == 0 || N == 1) {
		return 1;
	}
	else {
		return N * factorial(N - 1);
	}
}

int main(void)
{
	int N;
	int f = 0;
	int i = 0;

	scanf("%d", &N);

	f = factorial(N);

	while (1) {
		if (f % 10 == 0) {
			i++;
			continue;
		}
		else {
			break;
		}
	}

	printf("%d", i);
}