#include <stdio.h>

int dp[10] = {1, 1}; // dp의 초기화
int n;

int main() 
{
	int i, j, n;

	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		for (j = 0; j < i; j++) {
			dp[i] += dp[j]*dp[i-1-j];
		}
	}

	printf("%d", dp[n]);

	return 0;
}
