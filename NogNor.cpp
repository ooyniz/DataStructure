// 안 주고 안 받기
#include<stdio.h>

int a, b;

void pro(void) {
	double c;
	c = (double) (a+b)/2;
	printf("%lf", c);
}
int main()
{
	scanf("%d%d", &a, &b);
	pro();
    return 0;
}
