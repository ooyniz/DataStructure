// 계단 오르기
#include<stdio.h>

int n;
int dab = 0;

void pro(int v) {
	if (v == n) { 
		dab++;
		return;
	}
	if (v > n) return;
	pro(v+1); // 1계단
	pro(v+2); // 2계단
}

int main()
{
	scanf("%d", &n);
	pro(0); // 0부터 시작
	printf("%d", dab);
	return 0;
}
