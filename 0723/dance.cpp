// big dance
#include<stdio.h>

int n;
int dab = 0;

int pro(int s, int e) {
	if (e-s <= 1) {
		if (e-s == 1) return e*s;
		else return 0;
	}
	return pro(s, (s+e)/2) + pro((s+e)/2+1, e); 
	// 시작 값 +  끝 값
}

int main()
{
	scanf("%d", &n);
	printf("%d", pro(1, n));
	return 0;
}
