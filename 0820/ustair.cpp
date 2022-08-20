#include <stdio.h>
#include <algorithm>
using namespace std;
#define M 310

int num[M], a[M], b[M], n;

int main() 
{
	int i, j;

	scanf("%d", &n);

	for (i = 2; i <= n+1; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 2; i <= n+1; i++) {
		a[i] = max(a[i-2]+num[i], b[i-2]+num[i]); // 앞의 계단을 밟지 않는 경우
		b[i] = a[i-1] + num[i];					  // 앞의 계단을 밟는 경우
	}

	printf("%d", max(a[n+1], b[n+1]));

	return 0;
}
