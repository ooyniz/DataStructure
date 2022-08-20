#include <stdio.h>
#include <algorithm>
using namespace std;
#define M 10010

int num[M], dp[M], via[M];
int n, dab, k;

void dfs(int i) { // 경로 역추적
	if (via[i]>0) dfs(via[i]);
	printf("%d ", num[i]);
}

int main() 
{
	int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
		dp[i] = 1; // dp 초기화
	}

	dab = 1; k = 1;

	for (i = 2; i <= n; i++) {
	// 현재 위치보다 앞에 위치하면서
				// num[i]보다 num[j]가 작은 값을 찾는다	
		for (j = i-1; j >= 1; j--) {	
			if (num[i] > num[j] && dp[i]<dp[j]+1) { 		
				dp[i] = dp[j]+1;
				via[i] = j;
			}
		}
		if (dab < dp[i]) {
			dab = dp[i];
			k = i;
		}
	}

	printf("%d\n", dab); // 최대 깊이 출력
	dfs(k); // 경로 출력

	return 0;
}
