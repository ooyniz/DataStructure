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

// 주고 안 받기
#include<stdio.h>

int a, b;

void pro(int v, int w) {
	double c;
	c = (double) (v+w)/2;
	printf("%lf", c);
}
int main()
{
	scanf("%d%d", &a, &b);
	pro(a, b);
    return 0;
}

// 주고 받기
#include<stdio.h>

int a, b;

double pro(int v, int w) {
	double c;
	c = (double) (v+w)/2;
	return c;
}
int main()
{
	scanf("%d%d", &a, &b);
	printf("%lf",pro(a, b));
    return 0;
}
