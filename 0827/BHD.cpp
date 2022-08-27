#include <stdio.h>

int s[80000];
long long dab;

int main() 
{
	int n, i, j, a, k;
	scanf("%d", &n);
	k = -1;

	for (i = 1; i <= n; i++) {
		scanf("%d", &a);
		if (k == -1 || s[k] > a) // 스택이 비어있거나 현재값보다 스택에 있는 값이 크면
			s[++k] = a;
		else {
			for (k; k >= 0 && s[k] <= a; --k) { // 현재값보다 스택에 있는 값이 작거나 같으면
				dab += k;
			}
			s[++k] = a; // 현재 값을 스택에 넣어준다
		}
	}

	dab += (k * (k + 1) / 2); // 미처 빼지 못한 부분 (스택이 비어있지 않으면) 추가 계산
	printf("%d||d", dab);
	return 0;
}
