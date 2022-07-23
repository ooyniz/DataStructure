// 이진수로 바꾸기
#include<stdio.h>

int v;

void pro(int v) {
	if (v == 0) return;
	pro(v/2); // 몫
	printf("%d", v%2);
}

int main()
{
	int n;
	scanf("%d", &n);
	pro(n);
	return 0;
}
