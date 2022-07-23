// 산 크기 모양
#include<stdio.h>

int n;

void pro(int v) {
	printf("%d", v); // 1 , 2, 3, ...
	if (v == n) return;
	pro(v + 1); 
	printf("%d", v); // n, n-1, n-2, ...
}

int main()
{
	scanf("%d", &n);
	pro(1); // 1부터 시작
	return 0;
}
