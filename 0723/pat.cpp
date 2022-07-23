// 비트 패턴
#include<stdio.h>

int n, m, dab[30];

void pro(int d, int l, int o) { // 깊이, 1의 수, 0의 수
	if (l > m || o>n-m) return;
	if (d == n) {
		for (int i=0; i<n; i++) 
			printf("%d", dab[i]);
		printf("\n");
		return;
	}
	dab[d] = 1;
	pro(d+1, l+1, o); // 1을 넣어준다.

	dab[d] = 0;
	pro(d+1, l, o+1); // 0을 넣어준다.
}

int main()
{
	scanf("%d%d", &n, &m);
	pro(0, 0, 0);
	return 0;
}
