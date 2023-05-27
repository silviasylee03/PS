// 뽑기 1과 2의 합

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int a = 0;

// 중복 가능, 순서 없음 -> 중복 조합(오름차순)
void pick(int *select, int n, int *bucket, int m, int toPick, int k)
{
	int lastIndex, i, smallest, sum = 0;

	if (toPick == 0) {
		for (i = 0; i < m; i++) {
			sum += select[bucket[i]];
		}
		if (sum == k) {
			a++;
			/*for (i = 0; i < m; i++) {
				if (select[bucket[i]] != 0)
					printf("%d ", select[bucket[i]]);
			}
			printf("\n");*/
		}
		return;
	}

	lastIndex = m - toPick - 1;

	if (m == toPick)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (i = smallest; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(select, n, bucket, m, toPick - 1, k);
	}
}

int main(void)
{
	int n;
	int select[] = { 0, 1, 2 }; // 1과 2를 뽑음
	int *bucket;

	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);
	if (n == 0) {
		printf("0");
	}
	else {
		pick(select, 3, bucket, n, n, n);
		printf("%d\n", a);
	}

	return 0;
}